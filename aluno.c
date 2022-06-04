#include "aluno.h"

void* CriaAluno()
{
    aluno* me = (aluno *)malloc(sizeof(aluno));

    return me;
}
int LiberaAluno(void** ptrDado)
{
     if(*ptrDado)
}
int LeAluno(void* ptrDado);
void* CriaLeAluno();
int EscreveAluno(void* ptrDado);

int ComparaAlunoRA(void* ptrElemento, void* ptrChaveBusca);
int ComparaAlunoNome(void* ptrElemento, void* ptrChaveBusca);
