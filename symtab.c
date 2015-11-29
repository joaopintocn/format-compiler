#include "symtab.h"

struct BucketListRec * hashTable = NULL;

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


struct BucketListRec * st_lookup ( char * name ) {
  struct BucketListRec *s;

    // TO-DO Aqui deve-se usar a variável "name" usar a lista de escopo e gerar a chave "key"
    // Por enquanto a chave está igual ao nome.
    char * key = name;

    HASH_FIND_STR( hashTable, key, s );  /* s: output pointer */
    return s;
} /* st_lookup */


void printSymTab(char *filename) {
    struct BucketListRec *s;
    FILE *listing = fopen(filename, "w");

  printf("         Key              Name    isSubprogram isConst isRef       Type       Num. of Parameters\n");
    printf("-----------------------   -------------   ---   -------------   ------------\n");

    for(s=hashTable; s != NULL; s=(struct BucketListRec*)(s->hh.next)) {
        char * sp = (s->isSubprogram)?"subprog":"var";
        char * c = (s->isConst)?"const":"";
        char * r = (s->isRef)?"ref":"";
        printf("%-25s   %-15s   %-10s   %-5s   %-3s   %-15s   %-15s\n", s->key, s->name, sp, c, r, s->type, s->value);
    }
    fclose(listing);
} /* printSymTab */
