#ifndef _PARSE_H_
#define _PARSE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symtab.h"


int yyerror (char *s);

int yylex();

void P_program();

void P_destination(char * name);


void P_simple_variable_declaration(char * modifier, char * type, char * name);

#endif