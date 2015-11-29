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

/*
 * O procedimento é responsável por chamar o processo de compilação para o 
 * arquivo especificado. Dessa forma, deve ser feito o mesmo que se está 
 * fazendo com o arquivo atual. Caso ele já tenha sido processado nao se faz 
 * nada. Na tabela de símbolos, as variáveis e subprogramas presentes nele 
 * está um escopo a baixo das variáveis do sistema e um escopo a cima das 
 * variáveis e subprogramas do arquivo atual. 
 */
void P_import(char * file);

void P_destination(char * name);


char * P_expression(char * op_1, char * op, char * op_2);

void P_simple_variable_declaration(char * modifier, char * type, char * name);

#endif