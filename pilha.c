#include <stdio.h>
#include <stdlib.h>

typedef struct pil {
	int key;
	struct pil *prox;
} Stack;

void push(Stack *stack, int n) {
	//criando um novo elemento
	Stack *aux = malloc(sizeof(Stack));
	aux->key   = n;

	//adicionando o novo elemento à Pilha
	aux->prox   = stack->prox;
	stack->prox = aux;
}

int pop(Stack *stack) { //remove o topo e o retorna
	if (stack->prox == NULL) { //quando a pilha está vazia
		printf("Empty\n");
		return -1; //pra não ficar sem retorno
	} else {
		int x; //elemento que vai ser retornado
		Stack *aux; //auxiliar na remoção

		aux = stack->prox;
		x = aux->key; //obtem o elemento
		stack->prox = aux->prox; //tira o elemento da pilha
		free(aux);
		return (x);
	}	
}

int look(Stack *stack) { //vê a cabeça, mas não remove
	if (stack->prox == NULL) { //quando a pilha está vazia
		printf("Empty\n");
		return -1; //pra não ficar sem retorno
	} else {
		return(stack->prox->key);
	}
}

int main() {
	Stack *stack = malloc(sizeof(Stack)); //cabeça da pilha
	stack->prox = NULL;

	push(stack, 1);
	push(stack, 2);
	//printf("%i\n", pop(stack));
	push(stack, 3);

	printf("%i\n", look(stack));
	printf("%i\n", look(stack));
	//printf("%i\n", pop(stack));
	//printf("%i\n", pop(stack));

	return(0);
}
