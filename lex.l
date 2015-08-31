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


unsigned charCount = 0, wordCount = 0, lineCount = 0;

%}

/* definições regulares */

word [^ \t\n]+
eol  \n

DELIM 		[ \t\n]
WS			{DELIM}+
/* ???: Porque letra está incorporando o "underline"? */
LETRA		[a-zA-Z_]
DIGITO		[0-9]
NUMERO 		{DIGITO}+(.{DIGITO}+)?(E[+-]?{DIGITO}+)?
NUMERO_COMPLEX ({NUMERO}i)
	
%{

%}

%%

	/* Foi especificado no primeiro relatório que os comentários seriam definidos através de %% */
\%%.*	{ printf("(COMMENT %s)\n", yytext);}

\"(\\.|[^\\"])*\" { printf("(STRING %s)\n", yytext);} 
int | 
real |
complex |
single_real |
double_real |
string |
enum |
struct |
set_of |
matrix_of |
end_struct |
const |
ref |
if |
else |
for |
while |
switch |
case |
break |
other |
end_if |
end_for |
end_while |
end_switch |
false |
true |
procedure |
function |
input |
output | /* TO-DO: Adicionar no relatório essas palavras chaves (joãopinto). */
return		{ printf("(KEYWORD %s)\n", yytext);}


";"	 |
","	 |
":"	 |
"("	 |
")"	 |
"["  |	
"]"  |		
".."		{ printf("(DELIMITER %s)\n", yytext);}

"+=" |
"-=" |
"*=" |
"/=" |
"%=" |
"++" |
"--" |
"&&" |
"||" |
"<-" |	
"<=" |
">=" |
"=" |
"<>" |
"-"  |		
"+"  |		
"*"  |		
"/"  |	
"%"  |	
"<"  |	
">"  |	
"^"  |	
"."	 { printf("(OPERATOR %s)\n", yytext);}
{NUMERO} { printf("(NUMERO %s)\n", yytext);}
{LETRA}({LETRA}|{DIGITO})*	{ printf("(IDENTIFIER %s)\n", yytext);}
{NUMERO_COMPLEX} { printf("(´COMPLEX NUMBER %s)\n", yytext);}

{word}	{ wordCount++; charCount += yyleng; }
{eol}	{ charCount++; lineCount++; }

{WS}	{ /* whitespace separates tokens */ }
	/* lex.l: 115: warning, rule cannot be matched TO-DO: Não sei como resolver...*/
.		{ /* discard bad characters */ printf("(OTHER %s)\n", yytext); charCount++;}

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
	printf("caracteres: %d, palavras: %d, linhas: %d\n",charCount, wordCount, lineCount);
	return 0;
}

/* Para mim foi gerado um warning. 
	Qual a necessidade dessa instrução?
 */
int yywrap()
{
	return(1);
}