/*
 * biblioteca.h
 *
 *  Created on: 24 de ago. de 2022
 *      Author: 1P1226
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

//Bibliotecas
#include <stdio.h>

//Struct
typedef struct dados lista;
struct dados{
	int codigo;
	lista *proximo;
};

//Constantes e macros
#define RANDOM(x) rand() % (x)

//Protótipos
void menu();
lista* pushPilha(lista *pilha);
void imprimir(lista *estrutura);
lista* pop(lista *estrutura);
lista* pushFila(lista *fila);
void pushFilaUltimo(lista **ultimoFila);

#endif /* BIBLIOTECA_H_ */
