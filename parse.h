#ifndef _PARSE_H_
#define _PARSE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symtab.h"

int yyerror (char *s);

int yylex();

char * fmt_twostrcat(char * str_1, char * str_2);
char * fmt_threestrcat(char * str_1, char * str_2, char * str_3);
// char * fmt_strcat(char * str_1, char * str_2, char * str_3, char * str_4);

/*
 * O procedimento busca na lista, que controla o escopo, o escopo atual e 
 * associa ele ao nome da da variável. Por exemplo, o escopo atual é 
 * "ARQglobals.f#getEscopoAtual#for" e a variável é i então deve ser retornado 
 * "ARQglobals.f#getEscopoAtual#for#i". Neste caso estamos processando outro 
 * arquivo, que se chama "globals.f", que possui um subprograma "getEscopoAtual",
 * que possui um laço e dentro desse laço está se declarando uma variável nova.
 * Atenção: esta função só deve ser chamada ao se declarar uma nova variável.
 */
char * fmt_generateKeyFor(char * name);

/*
 * O procedimento é chamado quando estamos querendo consultar na tabela de 
 * símbolos algum valor, ou atualizar algo de determinada variável ou sub-
 * programa. Deve-se ir buscando do escopo mais local para o global. Ao 
 * encontrar a chave, ela deve ser retornada.
 */
char * fmt_getKeyFor(char * name);

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

/*
 * O procedimento é responsável por inserir na tabela de símbolos as declarações
 * de variáveis simples. Bem como realizar a impressão dos dados lidos.
 */
void P_simple_variable_declaration(char * modifier, char * type, char * name, char * initVal);


void P_compost_variable_declaration_MATRIX(char * type, char * dimensions, char * identifier, char * initVal);
void P_compost_variable_declaration_SET(char *type, char *identifier, char *initVal);
void P_compost_variable_declaration_ENUM();
void P_compost_variable_declaration_STRUCT();

#endif