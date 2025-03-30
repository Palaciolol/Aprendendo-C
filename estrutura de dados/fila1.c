#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct  no *proximo;
    
}No;

void inserir_na_fila(No **fila, int num){
    No *aux, *novo = malloc(sizeof(No));
    if (novo != NULL){
        novo->valor = num;
        novo->proximo = NULL;
        if (*fila == NULL){
            *fila = novo;
        }
        else{
            aux = *fila;
            while(aux->proximo != NULL){
                aux = aux->proximo;

            }
            aux->proximo = novo;
        }
    }
    else{
        printf("Erro ao alocar memória");
    }

}
No* remover_da_fila(No **fila){
    No *remover = NULL;
    
    if (*fila != NULL){
        remover = *fila;
        *fila = remover->proximo;

    }
    else{
        printf("\nFILA VAZIA ...\n");
        
    }
    return remover;

}

void imprimir_fila(No *fila){
    printf("\t----------- FILA -----\n");
    while (fila != NULL){
        printf("%d ", fila->valor);
        fila = fila->proximo;
    }
    printf("\n\t----------- FIM DA FILA -----\n");   
}


int main()
{
    No *r, *fila = NULL;
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
            imprimir_fila(fila);
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
