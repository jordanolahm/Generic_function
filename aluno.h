#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    char nome[50];
    int idade, RA;
    float fNota[2];
}aluno;

void* CriaAluno();
int LiberaAluno(void** ptrDado);
int LeAluno(void* ptrDado);
void* CriaLeAluno();
int EscreveAluno(void* ptrDado);

int ComparaAlunoRA(void* ptrElemento, void* ptrChaveBusca);
int ComparaAlunoNome(void* ptrElemento, void* ptrChaveBusca);

#endif
