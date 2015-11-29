%{
	#include "parse.h"
%}

%union {
	char * sValue;
};

%start program

%token<sValue> IDENTIFIER  STRING_LIT  INTEGER_NUMBER  FLOAT_NUMBER 

IMPORT              
VARIABLES_SECTION
SUBPROGRAMS_SECTION
PROCEDURE           
FUNCTION            
END_PROCEDURE
END_FUNCTION
RETURN

INT
REAL
STRING
DOUBLE
BOOLEAN
ENUM
STRUCT
SET_OF 
MATRIX_OF
END_STRUCT
END_ENUM
CONST
REF

IF
ELSE
FOR
IN
WHILE
SWITCH
CASE
BREAK
OTHER
END_IF
END_FOR
END_WHILE
END_SWITCH

SEMICOLON 			/* ; */		
COMMA				/* , */
COLON				/* : */		
LPAREN        	/* ( */
RPAREN       	/* ) */
LBRACKETS			/* [ */
RBRACKETS			/* ] */
LBRACES			/* { */
RBRACES			/* } */
RANGE				/* .. */

ASSIGN_OP		    /*  = */
ADD_ASSIGN_OP 		/* += */	
SUB_ASSIGN_OP 		/* -= */
MULT_ASSIGN_OP		/* *= */
DIV_ASSIGN_OP		/* /= */	
MOD_ASSIGN_OP      	/* %= */
INCREMENT_OP      	/* ++ */
DECREMENT_OP		/* -- */

NEG_OP				/* ! */
AND_OP				/* && */
OR_OP 				/* || */

LEQ_OP				/* <= */
BEQ_OP 				/* >= */
EQ_OP				/* == */
NEQ_OP				/* != */
SUB_OP				/* -  */
ADD_OP				/* +  */
MULT_OP				/* *  */
DIV_OP				/* /  */
MOD_OP				/* %  */
LT_OP				/* <  */
BT_OP				/* >  */
EXPO_OP				/* ^  */ 
DOT_OP 				/* .  */
STRUCT_OP			/* -> */
COMMENT


%type<sValue> type term expression range_tail range dimensions dimensions_tail subprogram_call simple_variable_declaration_value
values_list set_assignment set_assignment_aux set_assignment_aux_aux
matrix_assignment_aux matrix_assignment_aux_aux matrix_assignment_aux_aux_aux matrix_assignment


%left OR_OP
%left AND_OP
%left EQ_OP NEQ_OP
%left LEQ_OP BEQ_OP LT_OP BT_OP
%left ADD_OP	SUB_OP
%left MULT_OP	DIV_OP MOD_OP
%left NEG_OP
%right	EXPO_OP
%nonassoc UMINUS

%%

program :
	program_header program_body		{ P_program(); }
	;

program_header :
	import program_header
	|
	;

import : 
	IMPORT STRING_LIT   { P_import($2); }
	;

program_body : 
	variable_section subprogram_section
	;

variable_section :
	VARIABLES_SECTION COLON { printf("\n\nvariables:\n\t"); }
		variable_declarations 
	|
	;


variable_declarations :
	variable_declaration SEMICOLON { printf(";\n\n\t"); } variable_declarations_tail
	;

variable_declaration :
	simple_variable_declaration  
	| compost_variable_declaration 
	;

variable_declarations_tail :
	variable_declarations 
	|
	;


subprogram_section :
	SUBPROGRAMS_SECTION COLON { printf("\nsubprograms:\n"); } subprogram_declarations 
	|
	;

subprogram_declarations :
	subprogram_declaration  subprogram_declarations_tail
	;

subprogram_declarations_tail :
	subprogram_declarations
	|
	;



simple_variable_declaration : 
	type IDENTIFIER simple_variable_declaration_value		{ printf("%s %s%s", $1, $2, $3); }
	| CONST type IDENTIFIER ASSIGN_OP expression 			{ printf("const %s %s = %s", $2, $3, $5); }
	| REF type IDENTIFIER simple_variable_declaration_value { printf("ref %s %s%s", $2, $3, $4); }
	;

simple_variable_declaration_value :
	ASSIGN_OP  expression 	{ $$ = fmt_strcat(" = ", $2); }
	|						{ $$ = ""; }
	;

type : 
	INT 				{ $$ = "int"; }
	| DOUBLE REAL 		{ $$ = "double real"; }
	| REAL 				{ $$ = "real"; }
	| BOOLEAN 			{ $$ = "boolean"; }
	| STRING 			{ $$ = "string"; }
	;

compost_variable_declaration :
	MATRIX_OF type LBRACKETS dimensions RBRACKETS IDENTIFIER matrix_assignment 		{ printf("matrix_of %s [%s] %s", $2, $4, $5); }
	| SET_OF { printf("set_of "); } type IDENTIFIER { printf("%s", $4); } set_assignment
	| ENUM { printf("enum "); } IDENTIFIER { printf("%s", $3); } COLON { printf(" : "); } IDENTIFIER { printf("%s", $7); } identifier_list END_ENUM { printf(" end_enum"); }
	| STRUCT { printf("struct "); } IDENTIFIER { printf("%s", $3); } COLON { printf(" : \n\t"); } variable_declarations END_STRUCT { printf("end_struct"); }
	;

matrix_assignment : 
	matrix_assignment_aux 	{ $$ = $1; }
	|						{ $$ = ""; }
	;


matrix_assignment_aux : 
	ASSIGN_OP LBRACES matrix_assignment_aux_aux 	{ $$ = fmt_strcat(" = { ", $3); } 


matrix_assignment_aux_aux:
	set_assignment_aux_aux RBRACES { $$ = fmt_strcat($1, " }"); }
	| LBRACES set_assignment_aux_aux RBRACES matrix_assignment_aux_aux_aux RBRACES { $$ = fmt_strcat3(fmt_strcat3("{ ", $2, " }") , $4, " }"); }
	;


matrix_assignment_aux_aux_aux : 
	COMMA LBRACES set_assignment_aux_aux RBRACES matrix_assignment_aux_aux_aux 	{ $$ = fmt_strcat(fmt_strcat3(", { ", $3, " }"), $5); }
	|																			{ $$ = ""; }
	;


set_assignment :
	set_assignment_aux 		{ $$ = $1; }
	|						{ $$ = ""; }
	;

set_assignment_aux :
	ASSIGN_OP LBRACES set_assignment_aux_aux RBRACES   { $$ = fmt_strcat3(" = { ", $3, " }"); }
	;


set_assignment_aux_aux :
	expression values_list		{ $$ = fmt_strcat($1, $2); }
	;

values_list :
	COMMA set_assignment_aux_aux 	{ $$ = fmt_strcat(", ", $2); }
	|								{ $$ = ""; }
	;

identifier_list :
	COMMA { printf(", "); } IDENTIFIER { printf("%s", $3); } identifier_list
	|
	;

dimensions : 
	range dimensions_tail	{ $$ = fmt_strcat($1, $2); }
	|						{ $$ = ""; }
	;

range :
	INTEGER_NUMBER range_tail	{ $$ = fmt_strcat($1, $2);}
	;

range_tail :
	RANGE INTEGER_NUMBER 	{ $$ = fmt_strcat("..", $2);}
	|				 		{ $$ = ""; }
	;

dimensions_tail :
	COMMA range dimensions_tail 	{ $$ = fmt_strcat3(", ", $2, $3);} 
	|								{ $$ = ""; }
	;

subprogram_declaration :
	procedure_declaration
	| function_declaration
	;

procedure_declaration :
	PROCEDURE IDENTIFIER LPAREN { printf("procedure %s(", $2); } parameter_list RPAREN COLON { printf("):\n"); }
		statement_list
	END_PROCEDURE SEMICOLON { printf("\nend_procedure;\n"); } 
	;

function_declaration :
	FUNCTION { printf("function "); } type IDENTIFIER { printf("%s", $4); } LPAREN { printf("("); } parameter_list RPAREN COLON { printf("):\n"); }
		statement_list
	END_FUNCTION SEMICOLON { printf("\nend_function;\n"); } 
	;

parameter_list :
	variable_declaration parameter_list_tail
	|
	;

parameter_list_tail :
	COMMA { printf(", "); } variable_declaration parameter_list_tail
	|
	;

statement_list :
	statement statement_list
	|
	;

statement :
	assignment_statement
	| if_statement
	| switch_statement
	| while_statement
	| for_statement
	| subprogram_call
	| return_statement
	| variable_declaration SEMICOLON { printf(";\n" ); }
	;

return_statement :    
	RETURN { printf("return "); } expression SEMICOLON { printf(";\n" ); }
	;

assignment_statement :
	destination assignment_statement_tail SEMICOLON { printf(";\n" ); }
	;

assignment_statement_tail :
	ASSIGN_OP 			{ printf(" = "); } 		expression /* = */
	| ADD_ASSIGN_OP 	{ printf(" += "); } 	expression /* += */
	| SUB_ASSIGN_OP 	{ printf(" -= "); } 	expression /* -= */
	| MULT_ASSIGN_OP 	{ printf(" *= "); } 	expression /* *=’ */
	| DIV_ASSIGN_OP 	{ printf(" /= "); } 	expression /* /= */
	| MOD_ASSIGN_OP 	{ printf(" %%= "); } 	expression /* %= */
	;

destination :
	IDENTIFIER identifier_tail		{ P_destination($1); printf("%s", $1 ); }
	;

/* permite atribuição de valor a um elemento de matriz*/
identifier_tail :
	LBRACKETS { printf(" [" ); } dimensions RBRACKETS { printf("] " ); }
	|
	;

if_statement :    
	IF LPAREN { printf("if (" ); } expression RPAREN COLON { printf(") :\n" ); }
		statement_list
	else_clausule
	END_IF SEMICOLON { printf("end_if;\n" ); }
	;

else_clausule :
	ELSE COLON { printf("else: \n" ); } statement_list
	|
	;

switch_statement : 
	SWITCH LPAREN { printf("switch (" ); } IDENTIFIER { printf("%s", $4 ); } RPAREN COLON { printf(") :" ); }
		case_clasule
		other_clasule
	END_SWITCH SEMICOLON { printf("end_switch;" ); }
	;

case_clasule :
	CASE LPAREN { printf("case (" ); } expression RPAREN COLON { printf(") :" ); }
		statement_list
	BREAK SEMICOLON { printf("break; (" ); }
	case_clasule
	|
	;

other_clasule :
	OTHER COLON { printf("other :" ); } statement_list
	|
	;

while_statement :
	WHILE LPAREN { printf("while (" ); } expression RPAREN COLON { printf(") :\n" ); }
		statement_list
	END_WHILE SEMICOLON { printf("end_while;\n" ); }
	;

for_statement :
	FOR { printf("for " ); } IDENTIFIER { printf("%s", $3 ); } IN { printf(" in " ); } IDENTIFIER { printf("%s", $7 ); } COLON { printf(":\n" ); }
		statement_list
	END_FOR SEMICOLON { printf("end_for;\n" ); }
	;

subprogram_call : 
	IDENTIFIER { printf("%s", $1 ); } LPAREN { printf("( " ); } argument_list RPAREN { printf(" )" ); } SEMICOLON { printf(";\n" ); }
	;

argument_list :
	argument_list_aux
	|
	;

argument_list_aux :
	expression argument_list_tail
	;

argument_list_tail :
	COMMA { printf(", " ); } argument_list_aux
	|
	;


expression:
	  term { $$ = $1; }
	| expression OR_OP expression 		{ $$ = fmt_strcat3($1, " || ", $3); }
	| expression AND_OP expression  	{ $$ = fmt_strcat3($1, " && ", $3); }
	| expression EQ_OP expression  		{ $$ = fmt_strcat3($1, " == ", $3); }
	| expression NEQ_OP expression  	{ $$ = fmt_strcat3($1, " != ", $3); }
	| expression LEQ_OP	expression  	{ $$ = fmt_strcat3($1, " <= ", $3); }
	| expression BEQ_OP expression  	{ $$ = fmt_strcat3($1, " >= ", $3); }
	| expression LT_OP expression   	{ $$ = fmt_strcat3($1, " < ", $3); }
	| expression BT_OP expression   	{ $$ = fmt_strcat3($1, " > ", $3); }
	| expression ADD_OP expression		{ $$ = fmt_strcat3($1, " + ", $3); }
	| expression SUB_OP expression		{ $$ = fmt_strcat3($1, " - ", $3); }
	| expression MULT_OP expression		{ $$ = fmt_strcat3($1, " * ", $3); }
	| expression DIV_OP expression		{ $$ = fmt_strcat3($1, " / ", $3); }
	| expression MOD_OP expression		{ $$ = fmt_strcat3($1, " %% ", $3); }
	| expression EXPO_OP expression		{ $$ = fmt_strcat3($1, " ^ ", $3); }
	| NEG_OP expression 				{ $$ = fmt_strcat("!", $2);}
	| SUB_OP expression	%prec UMINUS 	{ $$ = fmt_strcat3("-", $1, $2);}
	| LPAREN expression RPAREN 			{ $$ = fmt_strcat3("(", $2, ")");}
	;

term :
	INTEGER_NUMBER			{ $$ = $1; } 
	| FLOAT_NUMBER			{ $$ = $1; } 
	| STRING_LIT            { $$ = $1; } 
	| IDENTIFIER term_tail	{ 


		char * key = $1;
		struct BucketListRec * entry = st_lookup(key);

		if (entry == NULL) {
			printf("\n---------\nErro: A variável '%s' não foi declarada.\n----------\n", $1);
		} else {
			$$ = entry->sValue;
		}

	}
	| subprogram_call   { $$ = $1; }

term_tail :
	LBRACKETS dimensions RBRACKETS { printf("[%s]", $2); } 
	| STRUCT_OP IDENTIFIER  { printf("->%s", $2); }
	|
	;

%%
