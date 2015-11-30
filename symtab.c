#include "symtab.h"

struct BucketListRec * hashTable = NULL;

struct BucketListRec * st_insert(char *key, char *name) {
  struct BucketListRec *s;

    HASH_FIND_STR(hashTable, key, s);  /* id already in the hash? */
    if (s==NULL) {
      s = (struct BucketListRec*)malloc(sizeof(struct BucketListRec));
      s->key = key;
      HASH_ADD_KEYPTR(hh, hashTable, s->key, strlen(s->key), s);  /* id: name of key field */
    }
    s->name = name;

  return s;
} /* st_insert */


struct BucketListRec * st_lookup ( char * name ) {
  struct BucketListRec *s;

    // TO-DO Aqui deve-se usar a variável "name" usar a lista de escopo e gerar a chave "key"
    // Por enquanto a chave está igual ao nome.
    char * key = name;

    HASH_FIND_STR( hashTable, key, s );  /* s: output pointer */
    return s;
} /* st_lookup */


void importSystemFunctions(char *fileName) {
	FILE *archive = fopen(fileName, "r");

	struct BucketListRec * entry;

	//para determinar o número de linhas que vai ler
	int nItems=0;
	fscanf(archive, "%i", &nItems); 
	//printf("%i\n", nItems);

	int i=0;
	for (i = 0; i < nItems; i++) {
		char aux; //para ler os ponto e virgula separadores e itens
		char str[100];
		char *key;
		char *name;
		char *type;
		int nParameters;

		fscanf(archive, "%s ", str);
			key = (char *) malloc(sizeof(str));
			strcpy(key, str);
			fscanf(archive, "%c", &aux);
		fscanf(archive, "%s ", str);
			name = (char *) malloc(sizeof(str));
			strcpy(name, str);
			fscanf(archive, "%c", &aux);
		fscanf(archive, "%s ", str);
			type = (char *) malloc(sizeof(str));
			strcpy(type, str);
			fscanf(archive, "%c", &aux);
		fscanf(archive, "%i", &nParameters);
		entry = st_insert(key, name);
    entry->type = type;
    entry->numParameter = nParameters;
    //entry->isSubprogram = isSubprogram;
    //entry->isRef = isRef;
    //entry->isConst = isConst;
	}

	fclose(archive);
}

void printSymTab() {
    struct BucketListRec *s;

      printf("      Key           Name            Type      NºPar Subpr  Const   Ref\n");  
      printf("-------------- -------------- -------------- ------ ------ ------ -----\n");

    for(s=hashTable; s != NULL; s=(struct BucketListRec*)(s->hh.next)) {
      char * sp = (s->isSubprogram)?"subprog":"var";
      char * c = (s->isConst)?"const":"";
      char * r = (s->isRef)?"ref":"";
      printf("%-12s   %-12s   %-12s   %-4i   %-4d   %-4d   %-4d\n",
		s->key,
		s->name,
		s->type,
		s->numParameter,
		s->isSubprogram,
		s->isConst,
		s->isRef);
    }
    printf("\n");
} /* printSymTab */
