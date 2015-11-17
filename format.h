//Arquivo que implementa as funções da tabela de símbolos
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i; //para contra lar o loop

int op=1; //1 = deslocGlobal | 2 = deslocLocal
int deslocamentoLocal=1;  //para quando for uma variável local ou parâmetro
int deslocamentoGlobal=1; //para quando for uma variável global ou subprograma

int nivel=1; //para ir armazendo o nível em que a variável está no escopo

char *nome_provis; //para armazenar um nome de variável antes de inserir
char *tipo_provis; //para armazenar um nome de tipo antes de inserir

typedef struct tab {
	char *nome;
	char *tipo;
	int nivel;
	int deslocamento;
	struct tab *prox;
} Tabela;

Tabela *tabela;

//função que insere elementos na tabela
void push(char *nome, char *tipo, int nivel, int desloc, Tabela *p) {
	//declara nova célula e add seus valores
	Tabela *nova = (Tabela *) malloc(sizeof (Tabela));
		nova->nome = nome;
		nova->tipo = tipo;
		nova->nivel = nivel;
		nova->deslocamento = desloc;
	
	//liga o novo elemento à pilha
	nova->prox = p->prox;
	p->prox = nova;
}

//remover o topo da tabela
void pop(Tabela *t) {
	Tabela *p;

	if (t->prox != NULL) {
		p = t->prox;
		t->prox = p->prox;
		free(p);
	} else {
		printf("Pilha vazia!\n");
	};
}

int findSymbol(char *nome, int nivel, Tabela *p) { //ainda não está pronta

}

void imprimir(Tabela *t) {
	if (t->prox != NULL) {
		printf("\n------%s | %s | %i | %i\n", t->prox->nome, t->prox->tipo, t->prox->nivel, t->prox->deslocamento);
		imprimir(t->prox);
	}
}
