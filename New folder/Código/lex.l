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
unsigned charCount = 0, wordCount = 0, lineCount = 0;

%}

word [^ \t\n]+
eol  \n


WS			[ \t\r\n]+

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

	/* Foi especificado no primeiro relatório que os comentários seriam definidos através de %% */
\%%.*	{ printf("(COMMENT %s)\n", yytext);}


\"(\\.|[^\\"])*\" 	{ printf("(STRING %s)\n", yytext); } 
int 				{printf ("KEYWORD INT\n",yytext); }
real  				{printf ("KEYWORD REAL\n",yytext); }
complex  			{printf ("KEYWORD COMPLEX\n",yytext); }
single_real 		{printf ("KEYWORD SINGLE_REAL\n",yytext); }
double_real 		{printf ("KEYWORD DOUBLE_REAL\n",yytext); }
string 				{printf ("KEYWORD STRING\n",yytext);}
enum 				{printf ("KEYWORD ENUM\n",yytext); }
struct 				{printf ("KEYWORD STRUCT\n",yytext); }
SET_OF 				{printf ("KEYWORD SET_OF\n",yytext); }
matrix_of 			{printf ("KEYWORD MATRIX_OF\n",yytext); }
end_struct 			{printf ("KEYWORD END_STRUCT \n",yytext); }
const 				{printf ("KEYWORD CONST\n",yytext); }
ref 				{printf ("KEYWORD REF\n",yytext); }
if 					{printf ("KEYWORD IF\n",yytext); }
else 				{printf ("KEYWORD ELSE\n",yytext);}
for  				{printf ("KEYWORD FOR\n",yytext); }
while  				{printf ("KEYWORD WHILE\n",yytext); }
switch 				{printf ("KEYWORD SWITCH\n",yytext); }
case 				{printf ("KEYWORD CASE\n",yytext); }
break 				{printf ("KEYWORD BREAK\n",yytext); }
other               {printf ("KEYWORD OTHER\n",yytext); } 
end_if 				{printf ("KEYWORD END_IF\n",yytext);}
end_for 			{printf ("KEYWORD END_FOR\n",yytext); }
end_while 			{printf ("KEYWORD END_WHILE\n",yytext); }
end_switch 			{printf ("KEYWORD END_SWITCH\n",yytext); }
end_procedure 		{printf ("KEYWORD END_PROCEDURE\n",yytext);}
end_function		{printf ("KEYWORD END_FUNCTION\n",yytext); }
end_module			{printf ("KEYWORD END_MODULE\n",yytext); }
false 				{printf ("KEYWORD FALSE\n",yytext); }
true 				{printf ("KEYWORD TRUE\n",yytext); }
procedure 			{printf ("KEYWORD PROCEDURE\n",yytext);}
function 			{printf ("KEYWORD FUNCTION\n",yytext); }
import				{printf ("KEYWORD IMPORT\n",yytext); }
module 				{printf ("KEYWORD MODULE\n",yytext); }
return				{printf("KEYWORD RETURN \n", yytext);}
alloc				{printf("KEYWORD ALLOC \n", yytext);}
free				{printf("KEYWORD FREE \n", yytext);}
null                {printf("KEYWORD NULL \n", yytext);}

";"	 				{printf("SEMICOLON\n", yytext); }			
","	 				{printf("DELIMITER COMMA \n", yytext); }
":"	 				{printf("DELIMITER COLON \n", yytext); }				
"("	 				{printf("DELIMITER OPEN_PARENTHESIS\n", yytext); }
")"	 				{printf("DELIMITER CLOSE_PARENTHESIS\n", yytext); }
"["  				{printf("DELIMITER OPEN_BRACKETS\n", yytext); }
"]"  				{printf("DELIMITER CLOSE_BRACKETS\n", yytext); }
".."				{printf("RANGE\n", yytext); }

"+=" 				{printf("OPERATOR ADD_ASSIGN\n", yytext);}				
"-=" 				{printf("OPERATOR SUB_ASSIGN\n", yytext);}	
"*=" 				{printf("OPERATOR MULT_ASSIGN\n", yytext); }	
"/=" 				{printf("OPERATOR DIV_ASSIGN\n", yytext); }	
"%=" 				{printf("OPERATOR MOD_ASSIGN\n", yytext); }	
"++" 				{printf("OPERATOR INCREMENT\n", yytext); }	
"--" 				{printf("OPERATOR DECREMENT\n", yytext); }
"&&" 				{printf("OPERATOR AND\n", yytext); }
"||" 				{printf("OPERATOR OR\n", yytext); }	
"!"					{printf("OPERATOR NOT\n", yytext); }	
"=" 				{printf("OPERATOR ASSIGN\n", yytext); }	
"<=" 				{printf("OPERATOR LESS OR EQUAL\n", yytext);}
">=" 				{printf("OPERATOR BIGGER OR EQUAL\n", yytext);}
"==" 				{printf("OPERATOR  EQUAL\n", yytext); }
"<>" 				{printf("OPERATOR NOT EQUAL\n", yytext);}
"-"  				{printf("SUB OPERATOR \n", yytext); }
"+"  				{printf("ADD OPERATOR \n", yytext); }
"*"  				{printf("MULT OPERATOR \n", yytext);}	
"/"  				{printf("DIV OPERATOR \n", yytext); }
"%"  				{printf("MOD OPERATOR \n", yytext); }
"<"  				{printf("LESS THAN OPERATOR \n", yytext); }
">"  				{printf("BIGGER THAN OPERATOR \n", yytext);}
"^"  			    {printf("EXPONENTIATION OPERATOR \n", yytext);}
"."	 				{printf("DOT OPERATOR \n", yytext);}

{ID}		{ printf("ID \n", yytext);}
{NUM_INT}	{ printf("INTEGER NUMBER \n", yytext); }
{NUM_COM}	{ printf("COMPLEX NUMBER \n", yytext); }
{NUM_REAL} 	{ printf("REAL NUMBER \n", yytext); }



	/*
{word}	{ wordCount++; charCount += yyleng; }
{eol}	{ charCount++; lineCount++; }
	*/

{WS}	{ /* whitespace separates tokens */ }
.		{ charCount++; printf("(OTHER %s)\n", yytext); /* discard bad characters */ }


%%


int main(argc,argv)
int argc;
char **argv;
{

	if (argc > 1) {
		FILE *file;

		file = fopen(argv[1], "r");
		if (!file) {
			fprintf(stderr,"could not open %s\n",argv[1]);
			exit(1);
		}
		yyin = file;
	}

	yylex();
	return 0;
}

int yywrap()
{
	return(1);
}