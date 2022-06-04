#include "Uinteiro.h"

void *CriaInteiro(){

    int *ptrInteiro = (int*) malloc(sizeof(int));

    if(ptrInteiro)
        *ptrInteiro = 0;

    return ptrInteiro;

}

int LiberaInteiro(void **ptrDado){

    if(*ptrDado){
        free(*ptrDado);
        *ptrDado = NULL;
        return 1;
    }
    return 0;
}


int Leinteiro(void *ptrDado){

    if(!ptrDado)
        return 0;
    int *ptrInteiro = (int *) ptrDado;

    scanf("%d",ptrInteiro);

    return 1;


}
void* CriaLeInteiro(){

    int *ptrInteiro = CriaInteiro();

    if (ptrInteiro)
        Leinteiro(ptrInteiro);


    return ptrInteiro;



}
int EscreveInteiro(void *ptrDado){
    if(!ptrDado)
        return 0;

    int *ptrInteiro = (int *) ptrDado;
    printf("%d",*ptrInteiro);

    return 1;



}

int ComparaInt(void *ptrElemento, void *ptrChaveBusca){

    int *ptrElem = (int *) ptrElemento;
    int *ptrChave = (int *) ptrChaveBusca;

    return *ptrElem - *ptrChave;
}
