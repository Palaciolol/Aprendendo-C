#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct  no *proximo;
    
}No;

typedef struct 
{
    No *prim;
    No *fim;
    int tam;

}Fila;

void criar_fila(Fila *fila){
    fila->prim = NULL;
    fila->fim = NULL;
    fila->tam = 0;  
}


void inserir_na_fila(Fila *fila, int num){
    No *aux, *novo = malloc(sizeof(No));
    if (novo != NULL){
        novo->valor = num;
        novo->proximo = NULL;
        if (fila->prim == NULL){
            fila->prim = novo;
            fila->fim = novo;
        }
        else{
           fila->fim->proximo = novo;
           fila->fim = novo;
        }
        fila->tam++;
    }
    else{
        printf("Erro ao alocar memória");
    }


}
No* remover_da_fila(Fila *fila){
    No *remover = NULL;
    
    if (fila->prim != NULL){
        remover = fila->prim;
        fila->prim = remover->proximo;
        fila->tam--;

    }
    else{
        printf("\nFILA VAZIA ...\n");
        
    }
    return remover;

}

void imprimir_fila(Fila *fila){
    No *aux = fila->prim;
    printf("\t----------- FILA -----\n");
    while (aux != NULL){
        printf("%d ", aux->valor);
        aux = aux->proximo;
    }
    printf("\n\t----------- FIM DA FILA -----\n");   
}

int main()
{
    No *r;
    Fila fila;
    criar_fila(&fila);
    int opcao, valor;

    do
    {
        printf("\n0 - SAiR\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_na_fila(&fila, valor);
            break;

        case 2:
            r = remover_da_fila(&fila);
            if (r != NULL){
                printf("Removido: %d\n",r->valor);

            }
            free(r);
            break;


        case 3:
            imprimir_fila(&fila);
            break;
        default:
            if (opcao != 0){
                printf("\nOpção Inválida!\n");  
            }
            break;
        }

    } while (opcao != 0);
    
    return 0;
}