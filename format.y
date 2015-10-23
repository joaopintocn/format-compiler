/* yacc -d format.y*/
%{
	#include <stdio.h>

	int yyerror (char *s);

	int yylex();

%}


%union {
	int 	iValue;
	double 	dValue; 	//
	char * 	sValue;		//
};

%start program

%token <sValue> NAME IDENTIFIER	STRING 
%token <iValue> NUMBER COMPLEX_NUMBER INT_NUMBER
%token <dValue> REAL_NUMBER 
%token					

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
COMPLEX
STRING_TYPE
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
OPEN_PARENTHESIS        	/* ( */
CLOSE_PARENTHESIS       	/* ) */
OPEN_BRACKETS			/* [ */
CLOSE_BRACKETS			/* ] */
OPEN_BRACES			/* { */
CLOSE_BRACES			/* } */
RANGE				/* .. */

ASSIGN_OP		/* = */
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
SUB_OP				/* - */
ADD_OP				/* + */
MULT_OP				/* * */
DIV_OP				/* / */
MOD_OP				/* % */
LT_OP				/* < */
BT_OP				/* > */
EXPO_OP				/* ^ */ 
DOT_OP 				/*.*/

COMMENT

%%

program :
	program_header program_body
	;

program_header :
	import program_header
	|
	;

import : 
	IMPORT STRING { printf("import %s\n", $2); }
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
	type IDENTIFIER  { printf("ID"); }  simple_variable_declaration_value
	| CONST { printf("const "); } type IDENTIFIER { printf("ID"); } ASSIGN_OP { printf(" = "); } expression 
	| REF { printf("ref "); } type IDENTIFIER { printf("ID"); } simple_variable_declaration_value
	;

simple_variable_declaration_value :
	ASSIGN_OP  { printf(" = "); }  expression 
	|
	;

type : 
	INT 				{ printf("int "); }
	| DOUBLE REAL 		{ printf("double real "); }
	| REAL 				{ printf("real "); }
	| COMPLEX 			{ printf("complex "); }
	| BOOLEAN 			{ printf("boolean "); }
	| STRING 			{ printf("string "); }
	;

compost_variable_declaration :
	MATRIX_OF { printf("matrix_of "); } type OPEN_BRACKETS { printf("[ "); } dimensions CLOSE_BRACKETS { printf(" ] "); } IDENTIFIER { printf("ID"); } matrix_assignment
	| SET_OF { printf("set_of "); } type IDENTIFIER { printf("ID"); } set_assignment
	| ENUM { printf("enum "); } IDENTIFIER { printf("ID"); } COLON { printf(" : "); } IDENTIFIER { printf("ID"); } identifier_list END_ENUM { printf(" end_enum"); }
	| STRUCT { printf("struct "); } IDENTIFIER { printf("ID"); } COLON { printf(" : \n\t"); } variable_declarations END_STRUCT { printf("end_struct"); }
	;

matrix_assignment : 
	matrix_assignment_aux
	|
	;


matrix_assignment_aux : 
	ASSIGN_OP { printf(" = "); } matrix_assignment_aux_aux
	;


matrix_assignment_aux_aux : 
	OPEN_BRACES { printf("{ "); } set_assignment_aux_aux CLOSE_BRACES { printf(" }"); } values_group_list
	;

values_group_list :
	values_group_list_aux
	|
	;


values_group_list_aux :
	COMMA { printf(",\n"); } matrix_assignment_aux_aux
	;


set_assignment :
	set_assignment_aux
	|
	;

set_assignment_aux :
	ASSIGN_OP { printf(" = "); } OPEN_BRACES { printf("{ "); } set_assignment_aux_aux CLOSE_BRACES   { printf(" }"); } 
	;


set_assignment_aux_aux :
	expression values_list
	;

values_list :
	COMMA { printf(", "); } set_assignment_aux_aux
	|
	;

identifier_list :
	COMMA { printf(", "); } IDENTIFIER { printf("ID"); } identifier_list
	|
	;

dimensions : 
	range dimensions_tail 
	|
	;

range :
	INT_NUMBER {printf("%i", $1);} range_tail
	;

range_tail :
	RANGE {printf("..");} INT_NUMBER {printf("%i", $3);}
	|
	;

dimensions_tail :
	COMMA {printf(", ");} range dimensions_tail
	|
	;

subprogram_declaration :
	procedure_declaration
	| function_declaration
	;

procedure_declaration :
	PROCEDURE IDENTIFIER OPEN_PARENTHESIS { printf("procedure ID("); } parameter_list CLOSE_PARENTHESIS COLON { printf("):\n"); }
		statement_list
	END_PROCEDURE SEMICOLON { printf("\nend_procedure;\n"); } 
	;

function_declaration :
	FUNCTION { printf("function "); } type IDENTIFIER { printf("ID"); } OPEN_PARENTHESIS { printf("("); } parameter_list CLOSE_PARENTHESIS COLON { printf("):\n"); }
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
	IDENTIFIER { printf("ID" ); } identifier_tail
	;

/* permite atribuição de valor a um elemento de matriz*/
identifier_tail :
	OPEN_BRACKETS { printf(" [" ); } dimensions CLOSE_BRACKETS { printf("] " ); }
	|
	;

if_statement :    
	IF OPEN_PARENTHESIS { printf("if (" ); } expression CLOSE_PARENTHESIS COLON { printf(") :\n" ); }
		statement_list
	else_clausule
	END_IF SEMICOLON { printf("end_if;" ); }
	;

else_clausule :
	ELSE COLON { printf("else: \n" ); } statement_list
	|
	;

switch_statement : 
	SWITCH OPEN_PARENTHESIS { printf("switch (" ); } IDENTIFIER { printf("ID" ); } CLOSE_PARENTHESIS COLON { printf(") :" ); }
		case_clasule
		other_clasule
	END_SWITCH SEMICOLON { printf("end_switch;" ); }
	;

case_clasule :
	CASE OPEN_PARENTHESIS { printf("case (" ); } expression CLOSE_PARENTHESIS COLON { printf(") :" ); }
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
	WHILE OPEN_PARENTHESIS { printf("while (" ); } expression CLOSE_PARENTHESIS COLON { printf(") :" ); }
		statement_list
	END_WHILE SEMICOLON { printf("end_while;" ); }
	;

for_statement :
	FOR { printf("for " ); } IDENTIFIER { printf("ID" ); } IN { printf(" in " ); } IDENTIFIER { printf("ID" ); } COLON { printf(":\n" ); }
		statement_list
	END_FOR SEMICOLON { printf("end_for;" ); }
	;

subprogram_call : 
	IDENTIFIER { printf("ID" ); } OPEN_PARENTHESIS { printf("( " ); } argument_list CLOSE_PARENTHESIS { printf(" )" ); }
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

expression :
 	term_or term_or_tail
	;

term_or_tail : 
	OR_OP { printf(" || " ); } term_or term_or_tail /* OR_OP = '||'  */
	|
	;

term_or :
	term_and term_and_tail
	;

term_and_tail :
	AND_OP { printf(" && " ); } term_and term_and_tail /* AND_OP = ‘&&’ */
	|
	;

term_and :
	term_bool_comparison term_bool_comparison_tail
	;

term_bool_comparison_tail :
	EQ_OP { printf(" == "); } term_bool_comparison term_bool_comparison_tail /* EQ_OP ‘==’ */
	| NEQ_OP { printf(" != "); } term_bool_comparison term_bool_comparison_tail /* NEQ_OP ‘!=’ */
	|
	;

term_bool_comparison :
	term_arit_comparison term_arit_comparison_tail
	;

term_arit_comparison_tail :
	LEQ_OP { printf(" <= "); } term_arit_comparison term_arit_comparison_tail /* LEQ_OP = <= */
	| BEQ_OP { printf(" >= "); } term_arit_comparison term_arit_comparison_tail /* BEQ_OP = >= */
	| LT_OP { printf(" < "); } term_arit_comparison term_arit_comparison_tail /* LT_OP = < */
	| BT_OP { printf(" > "); } term_arit_comparison term_arit_comparison_tail /* LT_OP = > */
	| 
	;

term_arit_comparison :
	term term_tail
	;

term_tail :
	ADD_OP { printf(" + "); } term term_tail /* - */
	| SUB_OP { printf(" - "); } term term_tail /* + */
	|
	;

term :
	factor factor_tail
	;

factor_tail :
	MULT_OP { printf(" * "); } factor factor_tail /* * */
	| DIV_OP { printf(" / "); } factor factor_tail /* / */
	| MOD_OP { printf(" %% "); } factor factor_tail /* % */
	|
	;

factor :
	expo expo_tail
	;	

expo_tail :
	EXPO_OP { printf("^"); } expo expo_tail /* ^ */
	|
	;			

expo :
	negation negation_tail


negation_tail:
	NEG_OP { printf("!"); }  negation negation_tail /* ! */
	|
	;	
	
negation :
	INT_NUMBER { printf("%i", $1); } 
	| REAL_NUMBER { printf("%f", $1); } 
	| COMPLEX_NUMBER { printf("%d", $1); } 
	| STRING { printf("%s", $1); } 
	| IDENTIFIER { printf("ID"); } 
	| subprogram_call
	;

function_call :
	IDENTIFIER OPEN_PARENTHESIS parameter_list CLOSE_PARENTHESIS
	;


%%