#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int yyerror (char *s);

int yylex();

void init();

void DESTINATION_identifier(char * id);

#endif