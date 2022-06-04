#ifndef VETOR_H_INCLUDED
#define VETOR_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

void Levetor(void *ptrVetor[], int qtdElementos, void*(*ptrFncLe)());
void Escreve(void *ptrVetor[], int qtdElementos, int (*ptrFncEscreve)(void *));
int LiberaElementosVetor(void *ptrVetor[], int qtdElementos);

int LocalizaElmento(void *ptrVetor[], int qtdElementos, void *ptrChave, int (ptrFncCompara)(void *,void *));


#endif
