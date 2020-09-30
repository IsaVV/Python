// SPDX-License-Identifier: GPL-3.0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack {
		int value;
		struct stack *next;
};
void empilhar(struct stack **pilha, int number)
{
		struct stack *new;

		new = (struct stack *)malloc(sizeof(struct stack));
		new->next = *pilha;
		new->value = number;
		*pilha = new;
}
int desempilhar(struct stack **pill)
{
		struct stack *aux = *pill;

		int value_lost = aux->value;
		*pill = (*pill)->next;
		free(aux);
		return value_lost;
}
void imprimir(struct stack *pilha)
{
		struct stack *aux;

		aux = pilha;
		while ((aux != NULL) && (aux->next != NULL)) {
			printf("%d ", aux->value);
			aux = aux->next;
		}
		printf("%d\n", aux->value);
}
int main(void)
{
		char comand[50] = "";
		int number_written = 0, lost = 0;
		struct stack *pilha = NULL;

		while (strcmp(comand, "Finalizar") != 0) {
			scanf("%s", comand); fflush(stdin);
			if (strcmp(comand, "Empilhar") == 0) {
				scanf("%d", &number_written);
				empilhar(&pilha, number_written);
			}
			if (strcmp(comand, "Desempilhar") == 0)
				desempilhar(&pilha);
			if (strcmp(comand, "Imprimir") == 0)
				imprimir(pilha);
		}
		return 0;
}
