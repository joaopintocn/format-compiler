/* yacc -d format.y*/
%{
	#include <stdio.h>

	int yyerror (char *s);

	int yylex();

%}


%union {
	int 	iValue; 	//
	char 	cValue;		//
	char * 	sValue;		//
};

%start program

%token <sValue> NAME		/* nome de alguma coisa */
%token <iVlaue> NUMBER
%token					

IMPORT				/* import*/
VARIABLES_SECTION		/* variables*/
SUBPROGRAMS_SECTION		/* subprograms*/
PROCEDURE			/* procedure*/
FUNCTION			/* function*/
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

%%

program :
	program_header program_body
	;

program_header :
	import program_header
	|
	;

import : 
	IMPORT NAME
	;

program_body : 
	variable_section subprogram_section
	;

variable_section :
	VARIABLES_SECTION COLON variable_declarations
	|
	;

variable_declarations :
	variable_declaration SEMICOLON variable_declarations_tail
	|
	;

variable_declarations_tail :
	variable_declarations
	|
	;

subprogram_section :
	SUBPROGRAMS_SECTION COLON subprogram_declarations 
	|
	;

subprogram_declarations :
	subprogram_declaration subprogram_declarations_tail
	;

subprogram_declarations_tail :
	subprogram_declarations
	|
	;

variable_declaration :
	simple_variable_declaration 
	| compost_variable_declaration
	;


simple_variable_declaration : 
	type identifier simple_variable_declaration_value
	| CONST type identifier ASSIGN_OP expression 
	| REF type identifier simple_variable_declaration_value
	;

simple_variable_declaration_value :
	ASSIGN_OP expression
	|
	;

type : 
	INT
	| DOUBLE REAL
	| REAL
	| COMPLEX
	| BOOLEAN
	| STRING
	;

compost_variable_declaration :
	MATRIX_OF type OPEN_BRACKETS dimensions CLOSE_BRACKETS identifier matrix_assignment
	| SET_OF type identifier set_assignment
	| ENUM identifier COLON identifier identifier_list END_ENUM
	| STRUCT identifier COLON variable_declarations END_STRUCT
	;

matrix_assignment : 
	ASSIGN_OP OPEN_BRACES values CLOSE_BRACES values_group_list
	|
	;

set_assignment :
	ASSIGN_OP OPEN_BRACES values values_list CLOSE_BRACES
	|
	;

values :
	expression values_list
	;

values_list :
	COMMA values
	|
	;

values_group_list :
	COMMA OPEN_BRACES values CLOSE_BRACES values_group_list
	|
	;

identifier_list :
	COMMA identifier identifier_list
	|
	;

dimensions : 
	range dimensions_tail
	;

range :
	NUMBER range_tail /* NUMBER = <num_int> */
	;

range_tail : /* NUMBER = <num_int> */
	RANGE NUMBER
	|
	;

dimensions_tail :
	COMMA range dimensions_tail
	|
	;

subprogram_declaration :
	procedure_declaration
	| function_declaration
	;

procedure_declaration :
	PROCEDURE identifier OPEN_PARENTHESIS parameter_list CLOSE_PARENTHESIS COLON 
		statement_list
	END_PROCEDURE SEMICOLON
	;

function_declaration :
	FUNCTION type identifier OPEN_PARENTHESIS parameter_list CLOSE_PARENTHESIS COLON
		statement_list
	END_FUNCTION SEMICOLON
	;

parameter_list :
	variable_declaration parameter_list_tail
	|
	;

parameter_list_tail :
	COMMA variable_declaration parameter_list_tail
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
	| variable_declaration
	;

return_statement :    
	RETURN expression SEMICOLON
	;

assignment_statement :
	destination assignment_statement_tail SEMICOLON
	;

assignment_statement_tail :
	ASSIGN_OP expression /* = */
	| ADD_ASSIGN_OP expression /* += */
	| SUB_ASSIGN_OP expression /* -= */
	| MULT_ASSIGN_OP expression /* *=’ */
	| DIV_ASSIGN_OP expression /* /= */
	| MOD_ASSIGN_OP expression /* %= */
	;

destination :
	identifier identifier_tail
	;

/* permite atribuição de valor a um elemento de matriz*/
identifier_tail :
	OPEN_BRACKETS dimensions CLOSE_BRACKETS
	|
	;

if_statement :    
	IF OPEN_PARENTHESIS expression CLOSE_PARENTHESIS COLON
		statement_list
	else_clausule
	END_IF SEMICOLON
	;

else_clausule :
	ELSE statement_list
	|
	;

switch_statement : 
	SWITCH OPEN_PARENTHESIS identifier CLOSE_PARENTHESIS COLON
		case_clasule
		other_clasule
	END_SWITCH SEMICOLON
	;

case_clasule :
	CASE OPEN_PARENTHESIS expression CLOSE_PARENTHESIS COLON
		statement_list
	BREAK SEMICOLON
	case_clasule
	|
	;

other_clasule :
	OTHER COLON statement_list
	|
	;

while_statement :
	WHILE OPEN_PARENTHESIS expression CLOSE_PARENTHESIS COLON
		statement_list
	END_WHILE SEMICOLON
	;

for_statement :
	FOR identifier IN identifier COLON
		statement_list
	END_FOR SEMICOLON
	;

subprogram_call : 
	identifier OPEN_PARENTHESIS argument_list CLOSE_PARENTHESIS
	;

argument_list :
	expression argument_list_tail
	|
	;

argument_list_tail :
	COMMA argument_list
	|
	;

expression :
 	term_or term_or_tail
	;

term_or_tail : 
	OR_OP term_or term_or_tail /* OR_OP = '||'  */
	|
	;

term_or :
	term_and term_and_tail
	;

term_and_tail :
	AND_OP term_and term_and_tail /* AND_OP = ‘&&’ */
	|
	;

term_and :
	term_bool_comparison term_bool_comparison_tail
	;

term_bool_comparison_tail :
	EQ_OP term_comparison term_comparison_tail /* EQ_OP ‘==’ */
	| NEQ_OP term_comparison term_comparison_tail /* NEQ_OP ‘!=’ */
	|
	;

term_bool_comparison :
	term_arit_comparison term_arit_comparison_tail
	;

term_arit_comparison_tail :
	LEQ_OP term_comparison term_comparison_tail /* LEQ_OP = <= */
	| BEQ_OP term_comparison term_comparison_tail /* BEQ_OP = >= */
	| LT_OP term_comparison term_comparison_tail /* LT_OP = < */
	| BT_OP term_comparison term_comparison_tail /* LT_OP = > */
	| 
	;

term_arit_comparison :
	term term_tail
	;

term_tail :
	ADD_OP term term_tail /* - */
	| SUB_OP term term_tail /* + */
	|
	;

term :
	factor factor_tail
	;

factor_tail :
	MULT_OP factor factor_tail /* * */
	| DIV_OP factor factor_tail /* / */
	| MOD_OP factor factor_tail /* % */
	|
	;

factor :
	expo expo_tail
	;	

expo_tail :
	EXPO_OP incr_decr incr_decr_tail /* ^ */
	|
	;			

expo :
	INCREMENT_OP incr_decr /* ++ */
	| DECREMENT_OP incr_decr /* -- */
	| NEG_OP incr_decr /* ! */
	|
	;	
	
incr_decr :
	identifier
	| NUMBER /* no lugar de <literal> */
	| function_call /* no lugar de function call */
	| OPEN_PARENTHESIS expression CLOSE_PARENTHESIS
	;

function_call :
	identifier OPEN_PARENTHESIS parameter_list CLOSE_PARENTHESIS
	;

/* as 3 regras abaixo foram usadas na gramática mas não estão declaradas

	- incr_decr_tail
	- term_comparison
	- term_comparison_P

*/

incr_decr_tail : STRING NUMBER /* não declarada */
	;

term_comparison : NUMBER STRING /* não declarada */
	;

term_comparison_tail : COMMA STRING /* não declarada */
	;

identifier : STRING ;/* CORRIGIR
	[a-zA-z]{[a-zA-Z0-9_]} só pra figurar mesmo, mas tem que ajeitar*/
%%
