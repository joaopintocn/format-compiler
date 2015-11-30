#include "symtab.h"

struct BucketListRec * hashTable = NULL;

void st_insert(char *key, char *name, char *type, int nParameter, bool isSubprogram, bool isRef, bool isConst) {
  struct BucketListRec *s;

    HASH_FIND_STR(hashTable, key, s);  /* id already in the hash? */
    if (s==NULL) {
      s = (struct BucketListRec*)malloc(sizeof(struct BucketListRec));
      s->key = key;
      HASH_ADD_KEYPTR(hh, hashTable, s->key, strlen(s->key), s);  /* id: name of key field */
    }
    s->name = name;
	s->type = type;
	s->numParameter = nParameter;
	s->isSubprogram = isSubprogram;
	s->isRef = isRef;
	s->isConst = isConst;
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

	int i; //controle do loop	

	//para determinar o número de linhas que vai ler
	int nItems=0;
	fscanf(archive, "%i", &nItems); 
	//printf("%i\n", nItems);

	for (i=0; i < nItems; i++) {
		char aux; //para ler os ponto e virgula separadores e itens
		char str[100];
		char *key;
		char *name;
		char *type;
		int nParameters;

		fscanf(archive, "%s ", &str);
			key = (char *) malloc(sizeof(str));
			strcpy(key, str);
			fscanf(archive, "%c", &aux);
		fscanf(archive, "%s ", &str);
			name = (char *) malloc(sizeof(str));
			strcpy(name, str);
			fscanf(archive, "%c", &aux);
		fscanf(archive, "%s ", &str);
			type = (char *) malloc(sizeof(str));
			strcpy(type, str);
			fscanf(archive, "%c", &aux);
		fscanf(archive, "%i", &nParameters);
		st_insert(key, name, type, nParameters, TRUE, FALSE, FALSE);
		//printf("%s %c %s %c %s %c %i\n", key,  aux, name, aux, type, aux, nParameters);
	}

	fclose(archive);
}

void printSymTab() {
    struct BucketListRec *s;

      printf("      Key           Name            Type      NºPar isSub  isCon  isRef\n");  
      printf("-------------- -------------- -------------- ------ ------ ------ -----\n");

    for(s=hashTable; s != NULL; s=(struct BucketListRec*)(s->hh.next)) {
        char * sp = (s->isSubprogram)?"subprog":"var";
        char * c = (s->isConst)?"const":"";
        char * r = (s->isRef)?"ref":"";
        //printf("%-25s   %-15s   %-10s   %-5s   %-3s   %-15s   %-15s\n", s->key, s->name, sp, c, r, s->type, s->value);
		printf("%-15s %-15s %-15s %-6i %-6d %-6d %-6d\n", s->key, s->name, s->type, s->numParameter, s->isSubprogram, s->isConst, s->isRef);
    }
} /* printSymTab */
