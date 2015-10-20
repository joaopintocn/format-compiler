/* yacc -d format.y*/
%{
	#include <stdio.h>
%}

%token
NUMBER
NAME					/* nome de alguma coisa */

IMPORT					/* import*/
VARIABLES_SECTION			/* variables*/
SUBPROGRAMS_SECTION			/* subprograms*/
PROCEDURE				/* procedure*/
FUNCTION				/* function*/

SEMICOLON 				/* ; */		
COMMA					/* , */
COLON					/* : */		
OPEN_PARENTHESIS        		/* ( */
CLOSE_PARENTHESIS       		/* ) */
OPEN_BRACKETS				/* [ */
CLOSE_BRACKETS				/* ] */
OPEN_BRACES				/* { */
CLOSE_BRACES				/* } */
RANGE					/* .. */

INT
REAL
COMPLEX
STRING
DOUBLE
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
RETURN
END_IF
END_FOR
END_WHILE
END_SWITCH
END_PROCEDURE
END_FUNCTION

ASSIGN_OP		/* = */
ADD_ASSIGN_OP 		/* += */	
SUB_ASSIGN_OP 		/* -= */
MULT_ASSIGN_OP		/* *= */
DIV_ASSIGN_OP		/* /= */	
MOD_ASSIGN_OP       	/* %= */
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
	variable_declarations subprogram_declarations
	;

variable_declarations :
	VARIABLES_SECTION COLON variable_declarations_P
	|
	;

variable_declarations_P :
	variable_declaration SEMICOLON variable_declarations_PP
	|
	;

variable_declarations_PP  :
	variable_declarations_P
	|
	;

subprogram_declarations :
	SUBPROGRAMS_SECTION COLON subprogram_declarations_P 
	|
	;

subprogram_declarations_P :
	subprogram_declaration subprogram_declarations_PP
	;

subprogram_declarations_PP :
	subprogram_declarations_P
	|
	;

variable_declaration :
	simple_variable_declaration 
	| compost_variable_declaration
	;

type : 
	INT
	| DOUBLE REAL
	| REAL
	| STRING
	| COMPLEX
	;

simple_variable_declaration : 
	type identifier assignment_P
	| CONST type identifier ASSIGN_OP expression 
	| REF type identifier assignment_P
	;

assignment_P : STRING ; /* CORRIGIR
assignment_P :
	ASSIGN_OP expression
	| ADD_ASSIGN_OP expression
	| SUB_ASSIGN_OP expression
	| MULT_ASSIGN_OP expression
	| DIV_ASSIGN_OP	expression
	| MOD_ASSIGN_OP expression
	|
	; */

compost_variable_declaration :
	MATRIX_OF type OPEN_BRACKETS dimensions OPEN_BRACKETS identifier matrix_declaration
	| SET_OF type identifier set_declaration
	| ENUM identifier COLON identifier identifier_PPP END_ENUM
	| STRUCT identifier COLON variable_declarations_P END_STRUCT
	;

matrix_declaration : 
	ASSIGN_OP OPEN_BRACES values CLOSE_BRACES values_P
	|
	;

values :
	incr_decr values_PP
	;

values_PP :
	COMMA values
	|
	;

values_P :
	COMMA OPEN_BRACES values CLOSE_BRACES values_P
	|
	;

identifier_PPP :
	COMMA identifier identifier_PPP
	|
	;

set_declaration :
	ASSIGN_OP OPEN_BRACES values values_PP CLOSE_BRACES
	|
	;

dimensions : range dimensions_P
	;

range :
	NUMBER range_P /* NUMBER = <num_int> */
	;

range_P : /* NUMBER = <num_int> */
	RANGE NUMBER
	|
	;

dimensions_P :
	COMMA range dimensions_P
	|
	;


identifier : STRING ;/* CORRIGIR
	[a-zA-z]{[a-zA-Z0-9_]} só pra figurar mesmo, mas tem que ajeitar*/

subprogram_declaration :
	procedure_declaration
	| function_declaration
	;

procedure_declaration :
	PROCEDURE identifier OPEN_PARENTHESIS parameter_list CLOSE_PARENTHESIS COLON 
		statement_head
	END_PROCEDURE SEMICOLON
	;

function_declaration :
	FUNCTION type identifier OPEN_PARENTHESIS parameter_list CLOSE_PARENTHESIS COLON
		statement_head
	END_FUNCTION SEMICOLON
	;

parameter_list :
	variable_declaration parameter_list_P
	|
	;

parameter_list_P :
	COMMA variable_declaration parameter_list_P
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
	| variable_declarations_P
	;

statement_head :
	statement SEMICOLON statement_head
	|
	;

return_statement :    
	RETURN expression SEMICOLON
	;

assignment_statement :
	destination assignment_statement_P SEMICOLON
	;

assignment_statement_P :
	ASSIGN_OP expression /* = */
	| ADD_ASSIGN_OP expression /* += */
	| SUB_ASSIGN_OP expression /* -= */
	| MULT_ASSIGN_OP expression /* *=’ */
	| DIV_ASSIGN_OP expression /* /= */
	| MOD_ASSIGN_OP expression /* %= */
	;


destination :
	identifier identifier_P
	;

/* permite atribuição de valor a um elemento de matriz*/
identifier_P :
	OPEN_BRACKETS expression identifier_PP OPEN_BRACKETS
	|
	;

/* permite várias dimensões na matriz */
identifier_PP : 
	COMMA expression identifier_PP
	|
	;

if_statement :    
	IF OPEN_PARENTHESIS expression CLOSE_PARENTHESIS COLON
		statement_head
	else_clausule
	END_IF SEMICOLON
	;

else_clausule :
	ELSE
		statement_head
	|
	;

switch_statement : 
	SWITCH OPEN_PARENTHESIS identifier CLOSE_PARENTHESIS COLON
		case_clasule
		other_clasule
	END_SWITCH SEMICOLON
	;

other_clasule :
	OTHER COLON statement_head
	|
	;

case_clasule :
	CASE OPEN_PARENTHESIS expression CLOSE_PARENTHESIS COLON
		statement_head
	BREAK SEMICOLON
	case_clasule
	|
	;

while_statement :
	WHILE OPEN_PARENTHESIS expression CLOSE_PARENTHESIS COLON
		statement_head
	END_WHILE SEMICOLON
	;

for_statement :
	FOR identifier IN identifier COLON
		statement_head
	END_FOR SEMICOLON
	;

subprogram_call : 
	identifier OPEN_PARENTHESIS argument_list CLOSE_PARENTHESIS
	;

argument_list :
	expression argument_list_P 
	|
	;

argument_list_P :
	COMMA argument_list
	|
	;


expression :
 	term_or term_or_P
	;

term_or_P : 
	OR_OP term_or term_or_P /* OR_OP = '||'  */
	|
	;

term_or :
	term_and term_and_P
	;

term_and_P :
	AND_OP term_and term_and_P /* AND_OP = ‘&&’ */
	|
	;

term_and :
	term_bool_comparison term_bool_comparison_P
	;

term_bool_comparison_P :
	EQ_OP term_comparison term_comparison_P /* EQ_OP = ‘==’ */
	| NEQ_OP term_comparison term_comparison_P /* NEQ_OP = ‘!=’ */
	|
	;

term_bool_comparison :
	term_arit_comparison term_arit_comparison_P
	;

term_arit_comparison_P :
	LEQ_OP term_comparison term_comparison_P /* LEQ_OP = <= */
	| BEQ_OP term_comparison term_comparison_P /* BEQ_OP = >= */
	| LT_OP term_comparison term_comparison_P /* LT_OP = < */
	| BT_OP term_comparison term_comparison_P /* LT_OP = > */
	| 
	;

term_arit_comparison :
	term term_P
	;

term_P :
	ADD_OP term term_P /* - */
	| SUB_OP term term_P /* + */
	|
	;

term :
	factor factor_P
	;

factor_P :
	MULT_OP factor factor_P /* * */
	| DIV_OP factor factor_P /* / */
	| MOD_OP factor factor_P /* % */
	|
	;

factor :
	expo expo_P
	;	

expo_P :
	EXPO_OP incr_decr incr_decr_P /* ^ */
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
	| subprogram_call /* no lugar de function call */
	| OPEN_PARENTHESIS expression CLOSE_PARENTHESIS
	;

/* as 3 regras abaixo foram usadas na gramática mas não estão declaradas

	- incr_decr_P
	- term_comparison
	- term_comparison_P

*/

incr_decr_P : STRING NUMBER /* não declarada */
	;

term_comparison : NUMBER STRING /* não declarada */
	;

term_comparison_P : COMMA STRING /* não declarada */
	;

%%
