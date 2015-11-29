#include "parse.h"

// String Module 

char * fmt_strcat3(char * str_1, char * str_2, char * str_3) {

    char * new_str = (char *) malloc(1 + strlen(str_1)+ strlen(str_2) );
    new_str = fmt_strcat(str_1, str_2);
    new_str = fmt_strcat(new_str, str_3);
    return new_str;
}

char * fmt_strcat(char * str_1, char * str_2) {

      char * new_str = (char *) malloc(1 + strlen(str_1)+ strlen(str_2) );
      strcpy(new_str, str_1);
      strcat(new_str, str_2);
      return new_str;
}

char * fmt_tostr(int i) {
	char* buffer;
	buffer = (char*)calloc(255, sizeof(char));
	sprintf(buffer, "%d", i);
	return buffer;
}

// -----------------

/*
 *
 */
void P_program() {

	struct BucketListRec * entry;
	// 
	st_insert(".main", "main");
	st_insert(".read", "read");
	st_insert(".write", "write");
	st_insert(".delete", "delete");
	st_insert(".new", "new");

	printSymTab("teste.txt");
	printf("\n");
}

void P_import(char * file) {
	printf("import %s\n", file);
	st_insert(file, file);
}

void P_destination(char * name) {
	struct BucketListRec * entry = st_lookup(name);
	// TO-DO O retorno sempre está sendo nulo, mas a variável é encontrada...
	if (entry == NULL) {
		printf("\n---------\nErro: A variável '%s' usada sem ser declarada\n----------\n", name);
	}
}

char * P_expression(char * op_1, char * op, char * op_2) {

return NULL;
}

void P_simple_variable_declaration(char * modifier, char * type, char * name) {
	
		struct BucketListRec * entry = st_lookup(name);

		if (entry == NULL) {
			//TO-DO Chamar função responsável por gerar chave
			char * key = name;
			st_insert(key, name);
		} else {
			printf("\n---------\nErro: A variável '%s' foi declarada repetidamente no mesmo escopo!\n----------\n", name);
		}
		 printf("%s %s", type, name);
}
