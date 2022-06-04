#ifndef UINTEIRO_H_INCLUDED
#define UINTEIRO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

void *CriaInteiro();
int LiberaInteiro(void **ptrDado);
int Leinteiro(void *ptrDado);
void* CriaLeInteiro();
int EscreveInteiro(void *ptrDado);

int ComparaInt(void *ptrElemento, void *ptrChaveBusca);

#endif
