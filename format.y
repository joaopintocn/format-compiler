%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	int nivel=0;
	int indice=0;
	char *nome_provis; //para armazenar um nome de variável antes de inserir
	char *tipo_provis; //para armazenar um nome de tipo antes de inserir

	typedef struct tab {
		char *nome;
		char *tipo;
		int nivel;
		int deslocamento;
		struct tab *prox;
	} Tabela;

	Tabela tabela[999];

	void imprimir(int indice, Tabela p[999]) {
		printf("\n-------------\n");
		int i;
		for (i=0; i < indice; i++) {
			printf("%s | %s | %i\n", p[i].nome, p[i].tipo, p[i].nivel);
		}
		printf("-------------\n");
	}

	/*//função que insere elementos ao final da lista
	void insere_T(char *nome, char *tipo, int nivel, Tabela *p) {
		printf("\n--- %s | %s | %i ---\n", nome, tipo, nivel);

		//Tabela *nova = (Tabela *) malloc(sizeof (Tabela));
		//Tabela *ultimo;

		//for (ultimo = p; ultimo->prox != NULL; ultimo = ultimo->prox) //busca o último elemento p/ inserir o novo após ele
		//{ }

		//nova->nome = nome;
		//nova->tipo = tipo;
		//nova->nivel = nivel;

		//nova->prox = ultimo->prox;
		//ultimo->prox = nova;
	}

	função que procura elemento na lista e retorna 1 se achar, 0 c.c
	//int strcmp(str1, str2); 0 qdo igual, 1 c.c
	int busca_T(char *nome, int nivel, Tabela *p) {
		Tabela *nova = (Tabela *) malloc(sizeof (Tabela));
		Tabela *ultimo;

		for (ultimo = p; ultimo->prox != NULL; ultimo = ultimo->prox) {//percorre a lista
			if (strcmp(nome, ultimo->nome) == 0) {
				if ((ultimo->nivel == nivel) || (ultimo->nivel == 0)) {
					return(1);
				}
			}
		}
		return(0);
	}*/

	void yyerror (char *s);

	int yylex();

%}


%union {
	int 	iValue;
	double 	dValue; 	//
	char * 	sValue;		//
};

%start program

%token <sValue> IDENTIFIER	STRING_LIT
%token <iValue> INT_NUMBER
%token <dValue> REAL_NUMBER IMAGINARY_PART NUMBER
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

COMMENT

%%

program :
	program_header program_body { printf("\n"); }//tabela = (Tabela *) malloc(sizeof (Tabela)); tabela->prox = NULL;}
	;

program_header :
	import program_header
	|
	;

import : 
	IMPORT STRING_LIT { printf("import %s\n", $2); }
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
	type IDENTIFIER  { printf("%s", $2);
						nome_provis = $2;
						tabela[indice].nome = nome_provis; /*insere_T(nome_provis, tipo_provis, nivel, tabela);*/
						tabela[indice].nivel = nivel;
						tabela[indice].tipo = tipo_provis;
						indice++;
					}  simple_variable_declaration_value
	| CONST { printf("const "); } type IDENTIFIER { printf("%s", $4); } ASSIGN_OP { printf(" = "); } expression 
	| REF { printf("ref "); } type IDENTIFIER { printf("%s", $4); } simple_variable_declaration_value
	;

simple_variable_declaration_value :
	ASSIGN_OP  { printf(" = "); }  expression 
	|
	;

type : 
	INT 				{ printf("int ");  tipo_provis = "int";}
	| DOUBLE REAL 		{ printf("double real "); tipo_provis = "double real";}
	| REAL 				{ printf("real "); tipo_provis = "real";}
	| COMPLEX 			{ printf("complex "); tipo_provis = "complex";}
	| BOOLEAN 			{ printf("boolean "); tipo_provis = "boolean"; imprimir(indice, tabela);}
	| STRING 			{ printf("string "); tipo_provis = "string";}
	;

compost_variable_declaration :
	MATRIX_OF { printf("matrix_of "); } type OPEN_BRACKETS { printf("[ "); } dimensions CLOSE_BRACKETS { printf(" ] "); } IDENTIFIER { printf("%s", $9); } matrix_assignment
	| SET_OF { printf("set_of "); } type IDENTIFIER { printf("%s", $4); } set_assignment
	| ENUM { printf("enum "); } IDENTIFIER { printf("%s", $3); } COLON { printf(" : "); } IDENTIFIER { printf("%s", $7); } identifier_list END_ENUM { printf(" end_enum"); }
	| STRUCT { printf("struct "); } IDENTIFIER { printf("%s", $3); } COLON { printf(" : \n\t"); } variable_declarations END_STRUCT { printf("end_struct"); }
	;

matrix_assignment : 
	matrix_assignment_aux
	|
	;


matrix_assignment_aux : 
	ASSIGN_OP { printf(" = { "); } OPEN_BRACES matrix_assignment_aux_aux
	;

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
	COMMA { printf(", "); } IDENTIFIER { printf("%s", $3); } identifier_list
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
	PROCEDURE IDENTIFIER OPEN_PARENTHESIS { printf("procedure %s(", $2); nivel++;} parameter_list CLOSE_PARENTHESIS COLON { printf("):\n"); }
		statement_list
	END_PROCEDURE SEMICOLON { printf("\nend_procedure;\n"); } 
	;

function_declaration :
	FUNCTION { printf("function "); nivel++;} type IDENTIFIER { printf("%s", $4); } OPEN_PARENTHESIS { printf("("); } parameter_list CLOSE_PARENTHESIS COLON { printf("):\n"); }
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
	IDENTIFIER { printf("%s", $1 ); } identifier_tail
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
	SWITCH OPEN_PARENTHESIS { printf("switch (" ); } IDENTIFIER { printf("%s", $4 ); } CLOSE_PARENTHESIS COLON { printf(") :" ); }
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
	FOR { printf("for " ); } IDENTIFIER { printf("%s", $3 ); } IN { printf(" in " ); } IDENTIFIER { printf("%s", $7 ); } COLON { printf(":\n" ); }
		statement_list
	END_FOR SEMICOLON { printf("end_for;\n" ); }
	;

subprogram_call : 
	IDENTIFIER { printf("%s", $1 ); } OPEN_PARENTHESIS { printf("( " ); } argument_list CLOSE_PARENTHESIS { printf(" )" ); } SEMICOLON { printf(";\n" ); }
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
	;

negation_unsub_tail:
	NEG_OP { printf("!"); }  negation_unsub  /* ! */
	|
	;	
	
negation_unsub :
	INT_NUMBER { printf("%i", $1); } 
	| REAL_NUMBER { printf("%f", $1); } 
	| IMAGINARY_PART { printf("%f", $1); } 
	| STRING_LIT { printf("%s", $1); } 
	| IDENTIFIER { printf("%s", $1); } negation_unsub_aux
	;

negation_unsub_aux :
	OPEN_BRACKETS { printf("["); } expression { printf("]"); } CLOSE_BRACKETS
	| OPEN_PARENTHESIS { printf("( "); } argument_list CLOSE_PARENTHESIS { printf(" )"); }
	|
	;

%%

/*int main(int argc, char **argv){
        yyin = fopen( argv[1], "r" );
        yyparse();
        return 0;
}*/
void yyerror(char *msg){
        printf("\n%s\n", msg);
}
