%{
	#include "parse.h"
%}


%union {
    struct { 
        int     iValue;
        double  dValue;
        char *  sValue; 
    } utype;
};

%start program

%token <utype> 
IDENTIFIER  
STRING_LIT
INT_NUMBER 
REAL_NUMBER 
IMAGINARY_PART

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
OPEN_PARENTHESIS    /* ( */
CLOSE_PARENTHESIS   /* ) */
OPEN_BRACKETS		/* [ */
CLOSE_BRACKETS		/* ] */
OPEN_BRACES			/* { */
CLOSE_BRACES		/* } */
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
SUB_OP				/* - */
ADD_OP				/* + */
MULT_OP				/* * */
DIV_OP				/* / */
MOD_OP				/* % */
LT_OP				/* < */
BT_OP				/* > */
EXPO_OP				/* ^ */ 
DOT_OP 				/* . */

COMMENT



%type<utype> type negation_unsub expression

%%

program :
    program_header program_body     { P_program(); }
    ;

program_header :
    import program_header
    |
    ;

import : 
    IMPORT STRING_LIT   { P_import($2.sValue); }
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
	type IDENTIFIER simple_variable_declaration_value		{ P_simple_variable_declaration(NULL, $1.sValue, $2.sValue); }
	| CONST { printf("const "); } type IDENTIFIER { printf("%s", $4.sValue); } ASSIGN_OP { printf(" = "); } expression 
	| REF { printf("ref "); } type IDENTIFIER { printf("%s", $4.sValue); } simple_variable_declaration_value
	;

simple_variable_declaration_value :
	ASSIGN_OP  { printf(" = "); }  expression 
	|
	;

type : 
	INT 				{ $$.sValue = "int"; }
	| DOUBLE REAL 		{ $$.sValue = "double real"; }
	| REAL 				{ $$.sValue = "real"; }
	| COMPLEX 			{ $$.sValue = "complex"; }
	| BOOLEAN 			{ $$.sValue = "boolean"; }
	| STRING 			{ $$.sValue = "string"; }
	;

compost_variable_declaration :
	MATRIX_OF { printf("matrix_of "); } type OPEN_BRACKETS { printf("[ "); } dimensions CLOSE_BRACKETS { printf(" ] "); } IDENTIFIER { printf("%s", $9.sValue); } matrix_assignment
	| SET_OF { printf("set_of "); } type IDENTIFIER { printf("%s", $4.sValue); } set_assignment
	| ENUM { printf("enum "); } IDENTIFIER { printf("%s", $3.sValue); } COLON { printf(" : "); } IDENTIFIER { printf("%s", $7.sValue); } identifier_list END_ENUM { printf(" end_enum"); }
	| STRUCT { printf("struct "); } IDENTIFIER { printf("%s", $3.sValue); } COLON { printf(" : \n\t"); } variable_declarations END_STRUCT { printf("end_struct"); }
	;

matrix_assignment : 
	matrix_assignment_aux
	|
	;


matrix_assignment_aux : 
	ASSIGN_OP { printf(" = { "); } OPEN_BRACES matrix_assignment_aux_aux


matrix_assignment_aux_aux:
	set_assignment_aux_aux CLOSE_BRACES { printf(" }"); }
	| OPEN_BRACES { printf("{ "); } set_assignment_aux_aux CLOSE_BRACES { printf(" }"); } matrix_assignment_aux_aux_aux CLOSE_BRACES { printf(" }"); }
	;


matrix_assignment_aux_aux_aux : 
	COMMA { printf(", "); } OPEN_BRACES { printf("{ "); } set_assignment_aux_aux CLOSE_BRACES { printf(" }"); } matrix_assignment_aux_aux_aux
	|
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
	COMMA { printf(", "); } IDENTIFIER { printf("%s", $3.sValue); } identifier_list
	|
	;

dimensions : 
	range dimensions_tail 
	|
	;

range :
	INT_NUMBER {printf("%i", $1.iValue);} range_tail
	;

range_tail :
	RANGE {printf("..");} INT_NUMBER {printf("%i", $3.iValue);}
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
	PROCEDURE IDENTIFIER OPEN_PARENTHESIS { printf("procedure %s(", $2.sValue); } parameter_list CLOSE_PARENTHESIS COLON { printf("):\n"); }
		statement_list
	END_PROCEDURE SEMICOLON { printf("\nend_procedure;\n"); } 
	;

function_declaration :
	FUNCTION { printf("function "); } type IDENTIFIER { printf("%s", $4.sValue); } OPEN_PARENTHESIS { printf("("); } parameter_list CLOSE_PARENTHESIS COLON { printf("):\n"); }
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
	IDENTIFIER identifier_tail		{ P_destination($1.sValue); printf("%s", $1.sValue ); }
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
	END_IF SEMICOLON { printf("end_if;\n" ); }
	;

else_clausule :
	ELSE COLON { printf("else: \n" ); } statement_list
	|
	;

switch_statement : 
	SWITCH OPEN_PARENTHESIS { printf("switch (" ); } IDENTIFIER { printf("%s", $4.sValue ); } CLOSE_PARENTHESIS COLON { printf(") :" ); }
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
	WHILE OPEN_PARENTHESIS { printf("while (" ); } expression CLOSE_PARENTHESIS COLON { printf(") :\n" ); }
		statement_list
	END_WHILE SEMICOLON { printf("end_while;\n" ); }
	;

for_statement :
	FOR { printf("for " ); } IDENTIFIER { printf("%s", $3.sValue ); } IN { printf(" in " ); } IDENTIFIER { printf("%s", $7.sValue ); } COLON { printf(":\n" ); }
		statement_list
	END_FOR SEMICOLON { printf("end_for;\n" ); }
	;

subprogram_call : 
	IDENTIFIER { printf("%s", $1.sValue ); } OPEN_PARENTHESIS { printf("( " ); } argument_list CLOSE_PARENTHESIS { printf(" )" ); } SEMICOLON { printf(";\n" ); }
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
    negation_unsub negation_unsub_tail


negation_unsub_tail:
    NEG_OP { printf("!"); }  negation_unsub  /* ! */
    |
    ;

	
negation_unsub :
	INT_NUMBER         { $$.iValue = $1.iValue; } 
	| REAL_NUMBER      { $$.dValue = $1.dValue; } 
    | IMAGINARY_PART   { $$.dValue = $1.dValue; }
	| IDENTIFIER       {
        char * key = $1.sValue;
        struct BucketListRec * entry = st_lookup(key);

        if (entry == NULL) {
                printf("\n---------\nErro: A variável '%s' não foi declarada.\n----------\n", $1.sValue);
            } else {
                switch (entry->type){
                    case INT:
                        $$.iValue = entry->iValue;
                        break;
                    case DOUBLE:
                        $$.dValue = entry->dValue;
                        break;
                }   
            }
            printf("%s", $1.sValue);
 }
	;

negation_unsub_aux :
    OPEN_BRACKETS { printf("["); } expression { printf("]"); } CLOSE_BRACKETS
    | OPEN_PARENTHESIS { printf("( "); } argument_list CLOSE_PARENTHESIS { printf(" )"); }
    |
    ;


%%

int main(int argc, char **argv){
        //yyin = fopen( argv[1], "r" );
        yyparse();
        return 0;
}

int yyerror(char *msg) {
        printf("\n%s\n", msg);
        return 1;
}
