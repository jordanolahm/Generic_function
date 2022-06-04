#include "aluno.h"
#include "vetor.h"
#include "Uinteiro.h"

int main()
{
    printf("Hello world!\n");

    int qtdElementos;

    printf("Entre com o tamanho do vetor....");
    scanf("%d", &qtdElementos);

    void *ptrVetor[qtdElementos];


    Levetor(ptrVetor,qtdElementos, CriaLeInteiro);

    Escreve(ptrVetor,qtdElementos, EscreveInteiro);

    LiberaElementosVetor(ptrVetor,qtdElementos);

    return 0;
}
