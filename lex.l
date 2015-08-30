/* definições regulares */
DELIM 		[ \t\n]
WS			{DELIM}+
LETRA		[A-Za-z]
DIGITO		[0-9]
ID 			[{LETRA}_][{LETRA}|{DIGITO}|_]*
NUMERO 		{DIGITO}+(.{DIGITO}+)?(E[+-]?{DIGITO}+)?

/* {ID}		{ printf("(IDENTIFIER %s)\n", yytext);} */

%%

\%%.*	{ printf("(COMMENT %s)\n", yytext);}

int | 
real |
complex |
single |
double |
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
"==" |
"<>" |
"="	 |
"-"  |		
"+"  |		
"*"  |		
"/"  |	
"%"  |	
"<"  |	
">"  |	
"^"  |		{ printf("(OPERATOR %s)\n", yytext);}

{NUMERO}	{ printf("(LITERAL %s)\n", yytext);}
\".*\"		{ printf("(LITERAL %s)\n", yytext);}


{WS}									{ /* whitespace separates tokens */ }
.										{ /* discard bad characters */ printf("(OTHER %s)\n", yytext); }

%%


int main (void) {
	return yylex ();
}
/* This is the "default main program" anyway, so it could be omitted. */