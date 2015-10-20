%{
	#include "y.tab.h"
	extern int yylval;
%}

%%
[0-9]+ {yylval = atoi(yytext); return NUMBER;}
[ \t] ; /* ignorar expaço em branco */
\n return 0;
. return yytext[0];

%%
