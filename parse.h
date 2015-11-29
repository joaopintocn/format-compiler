#ifndef _PARSE_H_
#define _PARSE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symtab.h"

int yyerror (char *s);

int yylex();

char * fmt_strcat(char * str_1, char * str_2);
char * fmt_strcat3(char * str_1, char * str_2, char * str_3);
// char * fmt_strcat(char * str_1, char * str_2, char * str_3, char * str_4);

char * fmt_tostr(int i);

void P_program();

void P_import(char * file);

void P_destination(char * name);


char * P_expression(char * op_1, char * op, char * op_2);

void P_simple_variable_declaration(char * modifier, char * type, char * name);

#endif