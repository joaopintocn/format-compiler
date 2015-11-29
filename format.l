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

#include "y.tab.h"

%}

WS				[ \t\r\n]+
EOF				-1

LETRA			[a-zA-Z]
DIGITO			[0-9]
INTEGER_NUMBER	{DIGITO}+
EXPOENTE 		[e|E][+-]?{INTEGER_NUMBER}
DECIMAL_NUMBER  {INTEGER_NUMBER}\.{INTEGER_NUMBER}
FLOAT_NUMBER 	-?({DECIMAL_NUMBER}){EXPOENTE}?
IDENTIFIER 		({LETRA}|_)({LETRA}|{DIGITO}|_)*



%%

\%%.*				{ /* emit(COMMENT, yytext); */ }

import				{return IMPORT; }
variables			{return VARIABLES_SECTION; }
subprograms			{return SUBPROGRAMS_SECTION; }
procedure 			{return PROCEDURE;}
function 			{return FUNCTION; }
end_procedure 		{return END_PROCEDURE;}
end_function		{return END_FUNCTION; }
return				{return RETURN;	}

int 				{return INT; }
real  				{return REAL; }
double 				{return DOUBLE; }
string 				{return STRING;}
boolean 			{return BOOLEAN;}	
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
in 					{return IN;}
while  				{return WHILE; }
switch 				{return SWITCH; }
case 				{return CASE; }
break 				{return BREAK; }
other               {return OTHER; } 
end_if 				{return END_IF;}
end_for 			{return END_FOR; }
end_while 			{return END_WHILE; }
end_switch 			{return END_SWITCH; }

";"	 				{return SEMICOLON; }			
","	 				{return COMMA; }
":"	 				{return COLON; }				
"("	 				{return LPAREN; }
")"	 				{return RPAREN; }
"["  				{return LBRACKETS; }
"]"  				{return RBRACKETS; }
"{"  				{return LBRACES; }
"}"  				{return RBRACES; }
".."				{return RANGE; }

"=" 				{return ASSIGN_OP; }	
"+=" 				{return ADD_ASSIGN_OP;}				
"-=" 				{return SUB_ASSIGN_OP;}	
"*=" 				{return MULT_ASSIGN_OP; }	
"/=" 				{return DIV_ASSIGN_OP; }	
"%=" 				{return MOD_ASSIGN_OP; }	
"++" 				{return INCREMENT_OP; }	
"--" 				{return DECREMENT_OP; }

"&&" 				{return AND_OP; }
"||" 				{return OR_OP; }
"!" 				{return NEG_OP;}			

"<=" 				{return LEQ_OP;}
">=" 				{return BEQ_OP;}
"==" 				{return EQ_OP; }
"!=" 				{return NEQ_OP;}
"-"  				{return SUB_OP; }
"+"  				{return ADD_OP; }
"*"  				{return MULT_OP;}	
"/"  				{return DIV_OP; }
"%"  				{return MOD_OP; }
"<"  				{return LT_OP; }
">"  				{return BT_OP;}
"^"  			    {return EXPO_OP;}
"."	 				{return DOT_OP;}
"->"				{return STRUCT_OP;}

\"(\\.|[^\\"])*\" 	{ yylval.sValue = strdup(yytext); 		return STRING_LIT; } 

{IDENTIFIER}		{ yylval.sValue = strdup(yytext); 		return IDENTIFIER;}
{INTEGER_NUMBER}	{ yylval.sValue = strdup(yytext); 		return INTEGER_NUMBER; }
{FLOAT_NUMBER}   	{ yylval.sValue = strdup(yytext); 		return FLOAT_NUMBER; }
{EOF}				{ return EOF; }

{WS}	{ /* whitespace separates tokens */ }
.		{ /* discard bad characters */ }


%%

int yywrap()
{
	return(1);
}

int yyerror(void)
{
    printf("Error\n");
    exit(1);
}

// int main(void)
// {
//    yyparse();
//    return 0;
// }