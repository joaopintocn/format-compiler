/* definições regulares */
DELIM 		[ \t\n]
WS			{DELIM}+
LETRA		[a-zA-Z_]
DIGITO		[0-9]
NUMERO 		{DIGITO}+(.{DIGITO}+)?(E[+-]?{DIGITO}+)?
NUMERO_COMPLEX ({NUMERO}i)
	
%{

%}

%%

"/*"	{ printf("(COMMENT %s)\n", yytext);}

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
output |
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

{WS}									{ /* whitespace separates tokens */ }
.										{ /* discard bad characters */ printf("(OTHER %s)\n", yytext); }

%%


int main (void) {
	return yylex ();
}
/* This is the "default main program" anyway, so it could be omitted. */

yywrap()
{
	return(1);
}