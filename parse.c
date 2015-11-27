#include "parse.h"

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
}

void DESTINATION_identifier(char * name) {
	struct BucketListRec * entry = st_lookup(name);
	// TO-DO O retorno sempre está sendo nulo, mas a variável é encontrada...
	if (entry == NULL) {
		printf("\n---------\nErro: A variável '%s' usada sem ser declarada\n----------\n", name);
	}
}

char * P_simple_variable_declaration(char * modifier, char * type, char * name) {
	
		struct BucketListRec * entry = st_lookup(name);
		char * result = "";

		if (entry == NULL) {
			//TO-DO Chamar função responsável por gerar chave
			char * key = name;
			st_insert(key, name);
			// to another function
			if (modifier != NULL)
				result = strcat(result, strcat(modifier, " "));
			result = strcat(result, strcat(type, strcat(" ", name)));			
		} else {
			printf("\n---------\nErro: A variável '%s' foi declarada repetidamente no mesmo escopo!\n----------\n", name);
		}
	return result;
}