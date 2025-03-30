#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no
{
    int valor;
    struct no* dir, *esq;

}NoArv;


NoArv* inserir(NoArv *raiz, int num){
    if (raiz == NULL){
        NoArv *aux = malloc(sizeof(NoArv));
        aux->valor = num;
        aux->esq = NULL;
        aux->dir = NULL;
        return aux;
    }
    else{
        if (num < raiz->valor){
            raiz->esq = inserir(raiz->esq, num);
        }
        else{
            raiz->dir = inserir(raiz->dir, num);
        }
        return raiz;

    }

}
NoArv *buscar(NoArv *raiz, int num){
    if (raiz){
        if (num == raiz->valor){
            return raiz;
        }
        else if (num < raiz->valor){
            return (raiz->esq, num);
        }
        else{
            return (raiz->dir, num);
        }

    }
    return NULL;
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
            raiz = inserir(raiz, valor);
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
