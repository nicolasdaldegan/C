/*
 * funcoes.c
 *
 *  Created on: 24 de ago. de 2022
 *      Author: 1P1226
 */
//bibliotecas
#include <ctype.h> //Para usar o toupper
#include <stdlib.h>
#include "biblioteca.h" //Para usar as funções que eu declarei.


//Funções
void menu(){
	char op;
	lista *pilha = NULL;
	lista *fila = NULL;
	lista *ultimo = NULL;

	do{
		printf("\nA - PUSH PILHA"
						"\nB - POP PILHA"
						"\nC - Exibir PILHA"
						"\nD - PUSH FILA"
						"\nE - POP FILA"
						"\nF - Exibir FILA"
						"\nG - Finalizar"
						"\nDigite sua opção: \n");
		//fflush(stdout);
		scanf(" %c", &op);
		//op = 'A';
		op = toupper(op);

		switch (op) {
			case 'A':
				pilha = pushPilha(pilha);
				printf("\nElemento inserido na pilha.\n");
				break;
			case 'B':
				pilha = pop(pilha);
				break;
			case 'C':
				imprimir(pilha);
				break;
			case 'D':
				//fila = pushFila(fila);
				pushFilaUltimo(&ultimo);
				if (!fila) {
					fila = ultimo;
				}
				break;
			case 'E':
				fila = pop(fila);
				break;
			case 'F':
				imprimir(fila);
				break;
		}

	} while (op != 'G');
}

lista* pushPilha(lista *pilha) {
	//Alocar dinamicamente
	lista *novo = (lista*) malloc (sizeof(lista));
	//Preencher dados
	novo->codigo = RANDOM(100);
	//Conectar o registro à pilha
	novo->proximo = pilha;
	//Alterar o topo da pilha
	return novo;
}

lista* pushFila(lista *fila){
	//Alocar dinamicamente
	lista *novo = (lista*) malloc (sizeof(lista));
	//Preencher dados
	novo->codigo = RANDOM(100);
	novo->proximo = NULL;
	//Conectar o registro à fila
	if (!fila) {//se é nulo
		return novo;
	} else {
		lista *tmp = fila;
		while (tmp->proximo) { //tmp->proximo != NULL
			tmp = tmp->proximo;
		}
		tmp->proximo = novo;
		return fila;
	}
}

void pushFilaUltimo(lista **ultimoFila){
	//Alocar dinamicamente
	lista *novo = (lista*) malloc (sizeof(lista));
	//Preencher dados
	novo->codigo = RANDOM(100);
	novo->proximo = NULL;
	//Conectar o registro à fila
	if (*ultimoFila) {
		(*ultimoFila)->proximo = novo;
	}
	(*ultimoFila) = novo;
}

void imprimir(lista *estrutura){
	if (estrutura){
		printf("\nEndereço %p - Código %d - Próximo %p",
				estrutura, estrutura->codigo, estrutura->proximo);
		imprimir(estrutura->proximo);
	}
}

lista* pop(lista *estrutura) {
	lista *tmp = NULL;
	if (estrutura) {
		tmp = estrutura->proximo;
		free(estrutura);
	}
	return tmp;
}







