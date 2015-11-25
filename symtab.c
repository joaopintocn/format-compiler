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

struct BucketListRec *hashTable = NULL;

void st_insert(char *key, char *name) {
  struct BucketListRec *s;

    HASH_FIND_STR(hashTable, key, s);  /* id already in the hash? */
    if (s==NULL) {
      s = (struct BucketListRec*)malloc(sizeof(struct BucketListRec));
      s->key = key;
      HASH_ADD_KEYPTR(hh, hashTable, s->key, strlen(s->key), s);  /* id: name of key field */
    }
    s->name = name;
} /* st_insert */


struct BucketListRec st_lookup ( char * name ) {
  struct BucketListRec *s;

    //TO-DO Aqui deve-se usar a variável "name" usar a lista de escopo e gerar a chave "key"

    HASH_FIND_INT( hashTable, key, s );  /* s: output pointer */
    return s;
} /* st_lookup */


void printSymTab(char *filename) {
    struct BucketListRec *s;
    FILE *listing = fopen(filename, "w");

	printf("        Key              Name           Type       Num. of Parameters\n");
  	printf("------------------   ------------   ------------   ------------------\n");

    for(s=hashTable; s != NULL; s=(struct BucketListRec*)(s->hh.next)) {
        printf("%-19s %-11s\n", s->key, s->name);
    }
    fclose(listing);
} /* printSymTab */