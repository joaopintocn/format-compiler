#include "parse.h"

// String Module 

char * fmt_threestrcat(char * str_1, char * str_2, char * str_3) {

    char * new_str = (char *) malloc(1 + strlen(str_1)+ strlen(str_2) );
    new_str = fmt_twostrcat(str_1, str_2);
    new_str = fmt_twostrcat(new_str, str_3);
    return new_str;
}

char * fmt_twostrcat(char * str_1, char * str_2) {

      char * new_str = (char *) malloc(1 + strlen(str_1)+ strlen(str_2) );
      strcpy(new_str, str_1);
      strcat(new_str, str_2);
      return new_str;
}

char * fmt_generateKeyFor(char * name) {

	return name;
}

// -----------------

/*
 *
 */
void P_program() {

	struct BucketListRec * entry;
	isAStruct = 0;
	importSystemFunctions("SystemFunctions.csv");
	printSymTab();
}


void P_import(char * file) {
	printf("import %s\n", file);
	st_insert(fmt_twostrcat("ARQ", file), file);
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

void P_simple_variable_declaration(char *modifier, char *type, char *name, char* initVal) {
		if (isAStruct == 1) {
			name = fmt_threestrcat(structName, ".", name);
		}

		char * key = fmt_generateKeyFor(name);	
		struct BucketListRec * entry = st_lookup(key);

		if (entry == NULL) {
			entry = st_insert(key, name);
			entry->type = type;
			entry->value = initVal;

			entry->isRef = FALSE;
			entry->isSubprogram = FALSE;
			entry->isConst = FALSE;

			if (strcmp(modifier, "")) {
				if (strcmp(modifier, "ref") == 0) {
					entry->isRef = TRUE;
				}
				if (strcmp(modifier, "const") == 0) { 
					entry->isConst = TRUE;
				}

				printf("%s %s %s", modifier, type, name);
			} else {
				printf("%s %s", type, name);
			}

			if (!strcmp(initVal,"")) {
				printf(" = %s", initVal);	
			}
		} else {
			printf("\n---------\nErro: A variável '%s' foi declarada repetidamente no mesmo escopo!\n----------\n", name);
		}

}

void P_compost_variable_declaration_MATRIX(char * type, char * dimensions, char * identifier, char * initVal) {
	char * key = fmt_generateKeyFor(identifier);
	struct BucketListRec * entry = st_lookup(key);

	if (entry == NULL) {
		entry = st_insert(key, identifier);
		entry->type = fmt_twostrcat("matrix ", type);
		entry->dimension = dimensions;
		//entry->value = initVal;

		entry->isRef = FALSE;
		entry->isSubprogram = FALSE;
		entry->isConst = FALSE;

		if (strcmp(initVal, "") == 0) {
			printf("matrix_of %s [%s] %s", type, dimensions, identifier);
		} else {
			printf("matrix_of %s [%s] %s = %s", type, dimensions, identifier, initVal);
		}
	} else {
		printf("\n---------\nErro: A variável '%s' foi declarada repetidamente no mesmo escopo!\n----------\n", identifier);
	}
	
	//printf("matrix_of %s [%s] %s = %s", type, dimensions, identifier, initVal);
	//st_insert();
}

void P_compost_variable_declaration_SET(char *type, char *identifier, char *initVal) {
	char * key = fmt_generateKeyFor(identifier);
	struct BucketListRec * entry = st_lookup(key);

	if (entry == NULL) {
		entry = st_insert(key, identifier);
		entry->type = fmt_twostrcat("set_of ", type);
		//entry->value = initVal;

		entry->isRef = FALSE;
		entry->isSubprogram = FALSE;
		entry->isConst = FALSE;

		if (strcmp(initVal, "") == 0) {
			printf("set_of %s %s", identifier, type);
		} else {
			printf("set_of %s %s %s", identifier, type, initVal);
		}
	} else {
		printf("\n---------\nErro: A variável '%s' foi declarada repetidamente no mesmo escopo!\n----------\n", identifier);
	}
}

void P_compost_variable_declaration_ENUM();

void P_compost_variable_declaration_STRUCT(char *identifier) {
	isAStruct = 1;
	structName = fmt_twostrcat(identifier, "");

	char * key = fmt_generateKeyFor(identifier);
	struct BucketListRec * entry = st_lookup(key);

	if (entry == NULL) {
		entry = st_insert(key, identifier);
		entry->type = "struct";

		entry->isRef = FALSE;
		entry->isSubprogram = FALSE;
		entry->isConst = FALSE;

		printf("struct %s:\n", identifier);
	} else {
		printf("\n---------\nErro: A variável '%s' foi declarada repetidamente no mesmo escopo!\n----------\n", identifier);
	}
}
