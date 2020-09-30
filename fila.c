// SPDX-License-Identifier: GPL-3.0
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define T 2000
struct line {
		struct line *next;
		char value[T];
};
int verifica(struct line **fila, char valor_atual[T])
{
		struct line *aux = *fila;

		while (aux != NULL) {
			if (strcmp(valor_atual, aux->value) == 0)
				return 1;
			aux = aux->next;
		}
		return 0;
}
int enfileirar(struct line **fila, struct line **end, char valor_atual[T])
{
		struct line *new = NULL;

		if (*fila != NULL && verifica(fila, valor_atual) == 1)
			return 0;
		if (*fila == NULL) {
			new = (struct line *)malloc(sizeof(struct line));
			new->next = NULL;
			strcpy(new->value, valor_atual);
			*fila = new;
			*end = new;
		} else {
			new = (struct line *)malloc(sizeof(struct line));
			new->next = NULL;
			strcpy(new->value, valor_atual);
			(*end)->next = new;
			*end = new;
		}
		return 0;
}
int desenfileirar(char valor_atual[T], struct line **fila, struct line **end)
{
		struct line *prox = *fila;
		struct line *aux = NULL;

		if (strcmp((*fila)->value, valor_atual) == 0) {
			if ((*fila)->next == NULL) {
				free(*fila);
				*fila = NULL;
				return 0;
			}
			if ((*fila)->next == NULL) {
				*fila = (*fila)->next;
				free(prox);
				return 0;
			}
			return 1;
		}
		while (prox != NULL) {
			if (strcmp(prox->value, valor_atual) == 0) {
				aux->next = prox->next;
				free(prox);
				return 0;
			}
			aux = prox;
			prox = aux->next;
		}
		return 1;
}

int split(char values[T], struct line **inicio, int flag)
{
		char valor_atual[T] = "\0";
		int cont = 0, retorno = 0, size = strlen(values);
		struct line *init_aux = *inicio;
		struct line *end_aux = NULL;

		if (values[0] == ' ' || values[0] == '\n' || values[0] == '\0') {
			printf("Fila de entrada vazia");
			return 1;
		}
		for (int i = 0; i < size; i++) {
			if (values[i] == ' ' || values[i] == '\0' || values[i] == '\n') {
				valor_atual[cont] = '\0';
				if (flag == 0) {
					enfileirar(&init_aux, &end_aux, valor_atual);
				} else if (flag == 1 && *inicio != NULL) {
					retorno = desenfileirar(valor_atual, &init_aux, &end_aux);
					if (retorno == 1) {
						printf("Impossivel tirar pessoa inexistente da fila");
						return 1;
					}
				}
				cont = 0;
				continue;
			}
			valor_atual[cont] = values[i];
			cont++;
		}
		*inicio = init_aux;
		return 0;
}
int main(void)
{
		char input_values[T], remove_values[T];
		int retorno = 0, flag = 0;
		struct line *fila = NULL, *aux = NULL;

		fgets(input_values, T, stdin);
		retorno = split(input_values, &fila, flag);
		if (retorno == 1)
			return 0;
		fgets(remove_values, T, stdin);
		if (strlen(input_values) >= strlen(remove_values)) {
			flag = 1;
			retorno = split(remove_values, &fila, flag);
			if (retorno == 1)
				return 0;
		} else {
			printf("Fila de saida maior que a de entrada");
			return 0;
		}
		aux = fila;
		while (aux != NULL) {
			if (aux->next != NULL)
				printf("%s ", aux->value);
			else
				printf("%s", aux->value);
			aux = aux->next;
		}
		return 0;
}
