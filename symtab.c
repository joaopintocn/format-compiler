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


void st_remove(char *key) {
  struct BucketListRec *entry;
  HASH_FIND_STR(hashTable, key, entry);

  HASH_DEL( hashTable, entry);
  free(entry);
} /* st_remove */


struct BucketListRec * st_lookup ( char * name ) {
  struct BucketListRec *s;

    // TO-DO Aqui deve-se usar a variável "name" usar a lista de escopo e gerar a chave "key"
    // Por enquanto a chave está igual ao nome.
    char * key = name;

    HASH_FIND_STR( hashTable, key, s );  /* s: output pointer */
    return s;
} /* st_lookup */

void st_beginScope(char * name) {

  if (currScope == NULL) {
    currScope = malloc(sizeof(Scope)); 
    currScope->name = name;
    currScope->next = NULL;
    currScope->variables = NULL;
    currScope->prev_scope = name;   

  } else {
    Scope * newScope = malloc(sizeof(Scope));
    char * path = malloc(100*sizeof(char));
    strcpy(path,currScope->prev_scope);
    strcat(path,"#");
    strcat(path,name);
    newScope->name = name;
    newScope->next = currScope;
    newScope->prev_scope = path;
    newScope->variables = NULL;
    currScope = newScope; 
  }
}

char * st_updateScope(char * name) {

  node_variable * p = malloc(sizeof(node_variable));
  char * path = malloc(100*sizeof(char));
  node_variable * iterator = currScope->variables;

  if(currScope->variables != NULL){
    while(iterator->next != NULL){
      iterator= iterator->next;
    }        
  }

  strcpy(path,currScope->prev_scope);
  strcat(path,"#");
  strcpy(path,currScope->name);
  strcat(path,"#");        
  strcat(path,name);
  p->path = path;
  p->name = name;
  p->next = NULL;
  if (currScope->variables == NULL) {
    currScope->variables = p;  
  } else {
    iterator->next = p;  
  }

  return p->path;
}


void st_endScope() {
  Scope * ptr = currScope->next;
  node_variable * iterator = currScope->variables;

  while(iterator != NULL){
      st_remove(iterator->path);
      iterator = iterator->next;
  }

  free(currScope);
  currScope = ptr; 
}


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
      printf("\n      Key           Name            Type      NºPar Subpr  Const   Ref\n");  
      printf("--------------------------   --------------   --------------   ------   ------   ------   -----\n");

    for(s=hashTable; s != NULL; s=(struct BucketListRec*)(s->hh.next)) {
      printf("%-25s  |  %-20s  |  %-20s  |  %-4d  |  %-4s  |  %-5s  |  %-5s\n",
    		s->key,
    		s->name,
    		s->type,
    		s->numParameter,
    		(s->isSubprogram)?"subprog":"var",
    		(s->isConst)?"const":"",
    		(s->isRef)?"ref":"");
    }
    printf("\n");
} /* printSymTab */



void printScope() {
  if(currScope != NULL){
    Scope * ptr = currScope;
    while(ptr != NULL){
      // printf("\n%s->",ptr->name);
      node_variable * ptr_var = currScope->variables;
      while(ptr_var!=NULL){
        printf("%s\n",ptr_var->path );
        ptr_var = ptr_var->next;
      }
      printf("\n");
      ptr = ptr->next;
    
    }
  }

} /* printScope */