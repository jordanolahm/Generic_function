#include "vetor.h"

void Levetor(void *ptrVetor[], int qtdElementos, void*(*ptrFncLe)()){
    int i;

    for(i=0;i<qtdElementos;i++){
        printf("\nEntre com o valor para posicao %d....",i);
        ptrVetor[i] = ptrFncLe();

    }
}


void Escreve(void *ptrVetor[], int qtdElementos, int (*ptrFncEscreve)(void *)){
    int i;

    for(i=0;i<qtdElementos;i++){
        printf("\nEscrevendo o valor da posicao...%d:",i);
        ptrFncEscreve(ptrVetor[i]);
    }

}

int LiberaElementosVetor(void *ptrVetor[], int qtdElementos){

    int i;

    if(qtdElementos <= 0)
        return 0;

    for(i=0;i<qtdElementos;i++){
        free(ptrVetor[i]);
    }

}

int LocalizaElmento(void *ptrVetor[], int qtdElementos, void *ptrChave, int (ptrFncCompara)(void *,void *))

{
    int i;

    for(i=0;i<qtdElementos;i++){
        if(ptrFncCompara(ptrVetor[i],ptrChave) == 0 )
            return i;
    }


}
