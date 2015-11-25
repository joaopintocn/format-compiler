#include "parse.h"

void init() {
	st_insert("func.for.x", "x");
	st_insert("func.for.y", "y");
	st_insert("func.for.z", "z");
	printSymTab("teste.txt");
}

void DESTINATION_identifier(char * name) {
	struct BucketListRec * entry = st_lookup(name);
	// TO-DO O retorno sempre está sendo nulo, mas a variável é encontrada...
	if (entry == NULL) {
		printf("\n---------\nErro: A variável '%s' usada sem ser declarada\n----------\n", name);
	}
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
}