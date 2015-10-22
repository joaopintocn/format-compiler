%{

/* Arquivo: lex.l
 * Autores: Breno Cardoso
 *			Elaine Lima
 *			João Pinto
 * 			Viviane Pinheiro
 *
 * A leitura de código através de arquivos foi retirada do livro 
 * "Lex & Yacc" de John R. Levine, Tony Mason e Doug Brown.
 */

#include "global.h"

%}

WS				[ \t\r\n]+
EOF				-1

LETRA			[a-zA-Z]
DIGITO			[0-9]
EXPOENTE 		(e|E)[+-]?{DIGITO}+
NUM_INT			{DIGITO}+
NUM_PONTO 		{NUM_INT}"."{DIGITO}+
NUM_COM	 		({NUM_PONTO}|{NUM_INT})(i|I)
NUM_REAL 		{NUM_PONTO}|{NUM_PONTO}{EXPOENTE}
NUMERO 			{NUM_REAL}|{NUM_COM}|{NUM_INT}

ID 				({LETRA}|_)({LETRA}|{DIGITO}|_)*





%%

\%%.*	{ emit(COMMENT, yytext); }

\"(\\.|[^\\"])*\" 	{return STRING; } 
int 				{return INT; }
real  				{return REAL; }
complex  			{return COMPLEX; }
double 				{return DOUBLE; }
string 				{return STRING;}
enum 				{return ENUM; }
struct 				{return STRUCT; }
set_of 				{return SET_OF; }
matrix_of 			{return MATRIX_OF; }
end_struct 			{return END_STRUCT; }
end_enum 			{return END_ENUM; }
const 				{return CONST; }
ref 				{return REF; }
if 					{return IF; }
else 				{return ELSE;}
for  				{return FOR; }
while  				{return WHILE; }
switch 				{return SWITCH; }
case 				{return CASE; }
break 				{return BREAK; }
other               {return OTHER; } 
end_if 				{return END_IF;}
end_for 			{return END_FOR; }
end_while 			{return END_WHILE; }
end_switch 			{return END_SWITCH; }
end_procedure 		{return END_PROCEDURE;}
end_function		{return END_FUNCTION; }
end_module			{return END_MODULE; }
false 				{return FALSE; }
true 				{return TRUE; }
procedure 			{return PROCEDURE;}
function 			{return FUNCTION; }
import				{return IMPORT; }
module 				{return MODULE; }
return				{return RETURN;	}
variables			{return VARIABLES_SECTION; }
subprograms			{return SUBPROGRAMS_SECTION; }

";"	 				{return SEMICOLON; }			
","	 				{return COMMA; }
":"	 				{return COLON; }				
"("	 				{return OPEN_PARENTHESIS; }
")"	 				{return CLOSE_PARENTHESIS; }
"["  				{return OPEN_BRACKETS; }
"]"  				{return CLOSE_BRACKETS; }
".."				{return RANGE; }

"+=" 				{return ADD_ASSIGN_OP;}				
"-=" 				{return SUB_ASSIGN_OP;}	
"*=" 				{return MULT_ASSIGN_OP; }	
"/=" 				{return DIV_ASSIGN_OP; }	
"%=" 				{return MOD_ASSIGN_OP; }	
"++" 				{return INCREMENT_OP; }	
"--" 				{return DECREMENT_OP; }
"&&" 				{return AND_OP; }
"||" 				{return OR_OP; }			
"=" 				{return ASSIGN_OP; }	
"<=" 				{return LEQ_OP;}
">=" 				{return BEQ_OP;}
"==" 				{return EQ_OP; }
"<>" 				{return NEQ_OP;}
"-"  				{return SUB_OP; }
"+"  				{return ADD_OP; }
"*"  				{return MULT_OP;}	
"/"  				{return DIV_OP; }
"%"  				{return MOD_OP; }
"<"  				{return LT_OP; }
">"  				{return BT_OP;}
"^"  			    {return EXPO_OP;}
"."	 				{return DOT_OP;}

{ID}				{ return ID;}
{NUM_INT}			{ return INT_NUMBER; }
{NUM_COM}			{ return COMPLEX_NUMBER; }
{NUM_REAL} 			{ return REAL_NUMBER; }

{EOF}				{ return EOF; }

{WS}	{ /* whitespace separates tokens */ }
.		{ /* discard bad characters */ }


%%

int yywrap()
{
	return(1);
}