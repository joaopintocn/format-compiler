#ifndef _SYMTAB_H_
#define _SYMTAB_H_

#include <stdio.h>   /* gets */
#include <stdlib.h>  /* atoi, malloc */
#include <string.h>  /* strcpy */
#include "uthash.h"

struct BucketListRec
   { const char * key;
   	 char * name;
   	 int isFunction;
   	 int numParameter;
   	 char * listTypeParameter;
	 UT_hash_handle hh;
   };

//LinkedList * currScope;

/* Procedure st_insert generate a key based on 
 * variable name and its escope to insert it 
 * on hash table. 
 */
//char * st_generate_key(LinkedList * currScope, char * name );


/* Procedure st_insert inserts line numbers and
 * memory locations into the symbol table
 * loc = memory location is inserted only the
 * first time, otherwise ignored
 */
void st_insert( char * key, char * name );

/* Function st_lookup returns the memory 
 * location of a variable or -1 if not found
 */
struct BucketListRec * st_lookup ( char * name );

/* Procedure printSymTab prints a formatted 
 * listing of the symbol table contents 
 * to the listing file
 */
void printSymTab(char * listing);

/*

//Arquivo que implementa as funções da tabela de símbolos

int i; //para contra lar o loop
int verRepeticao; //para ser usada quando for ver repetição de símbolo no mesmo escopo
int foiDeclarada; //para ser usada quando for ver se uma variável foi declarada antes de usada

int op=1; //1 = deslocGlobal | 2 = deslocLocal
int deslocamentoLocal=1;  //para quando for uma variável local ou parâmetro
int deslocamentoGlobal=1; //para quando for uma variável global ou subprograma

int nivel=1; //para ir armazendo o nível em que a variável está no escopo

char *nome_provis; //para armazenar um nome de variável antes de inserir
char *tipo_provis; //para armazenar um nome de tipo antes de inserir

typedef struct tab {
	char *nome;
	char *tipo;
	int nivel;
	int deslocamento;
	struct tab *prox;
} Tabela;

Tabela *tabela;


//remover o topo da tabela
void pop(Tabela *t) {
	Tabela *p;

	if (t->prox != NULL) {
		p = t->prox;
		t->prox = p->prox;
		free(p);
	} else {
		printf("Pilha vazia!\n");
	};
}

int findRepeatedSymbol(char *nome, int nivel, Tabela *t) { //ainda não está pronta
	if (t->prox == NULL) {
		return(0);
	} else if (strcmp(nome, t->prox->nome) == 0) {
		if (nivel == t->prox->nivel) {
			return(1);		
		} else {
			return(0);
		}
	} else {
		return(findRepeatedSymbol(nome, nivel, t->prox));
	}
}

*/

#endif