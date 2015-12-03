#ifndef _SYMTAB_H_
#define _SYMTAB_H_

#include <stdio.h>   /* gets */
#include <stdlib.h>  /* atoi, malloc */
#include <string.h>  /* strcpy */
#include "y.tab.h"
#include "uthash.h"

typedef enum { FALSE, TRUE } bool;

struct BucketListRec
   { const char * key;
   	 char * name;
	 char * dimension;
   	 bool isSubprogram;
	 bool isRef;		
   	 bool isConst;
   	 int numParameter;
   	 char * value;
   	 char * type;
   	 char * listTypeParameter;
	 UT_hash_handle hh;
   };

typedef struct node{

  char * name;  //guarda o nome da variável
  char * path;  //guarda os escopos onde a variável está inserida
  struct node * next;

} node_variable;

typedef struct node_scope{

  char * name; 
  node_variable * variables;
  struct node_scope * next;
  char * prev_scope;

} Scope;


Scope * currScope;

/* Procedure st_insert inserts line numbers and
 * memory locations into the symbol table
 * loc = memory location is inserted only the
 * first time, otherwise ignored
 */
struct BucketListRec * st_insert(char *key, char *name);

void st_remove(char *key);

/* Function st_lookup returns the memory 
 * location of a variable or -1 if not found
 */
struct BucketListRec * st_lookup ( char * name );

/* Start a new "scope" in "t".  Scopes are nested. */
void st_beginScope(char * name);

/* Remove any bindings entered since the current scope began,
   and end the current scope. */
void st_endScope();

/*
 *
 */
char * st_updateScope(char * name);

void importSystemFunctions(char *fileName);

/* Procedure printSymTab prints a formatted 
 * listing of the symbol table contents 
 * to the listing file
 */
void printSymTab();

void printScope();


#endif
