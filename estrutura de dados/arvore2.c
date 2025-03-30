#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no
{
    int valor;
    struct no* dir, *esq;

}NoArv;
    

void inserir(NoArv **raiz, int num){
    if (*raiz == NULL){
        *raiz = malloc(sizeof(NoArv));
        (*raiz)->valor = num;
        (*raiz)->esq = NULL;
        (*raiz)->dir = NULL;
    }
    else{
        if (num < (*raiz)->valor){
            inserir(&((*raiz)->esq), num);
        }   
        else{
            inserir(&((*raiz)->dir), num);
        }

    }

}
void imprimir(NoArv *raiz){
    if (raiz){
        printf("%d ", raiz->valor);
        imprimir(raiz->esq);
        imprimir(raiz->dir);
    }
}

void imprimir2(NoArv *raiz){
    if (raiz){
        imprimir(raiz->esq);
        printf("%d ", raiz->valor);
        imprimir(raiz->dir);
    }
}

int main()
{
    NoArv *raiz = NULL;
    int opcao, valor;

    do
    {
        printf("\n\t0 - SAIR\n\t1 - INSERIR\n\t2 - IMPRIMIR\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir(&raiz, valor);
            break;
        case 2:
            imprimir(raiz);
            printf("\n\n");
            imprimir2(raiz);
            break;
        
        default:
            printf("Opção Inválida ...");
            break;
        }

    } while (opcao != 0);
    



    return 0;
}