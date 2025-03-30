#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no *proximo;

}No;

void inserir_no_inicio(No **lista, int num){
    No *novo = malloc(sizeof(No));

    if (novo){
        novo->valor = num;
        novo->proximo = *lista;
        *lista = novo;

    }
    else{
        printf("Erro ao alocar memória");
    }

}

void inserir_no_fim(No **lista, int num){
    No  *aux, *novo = malloc(sizeof(No));

    if (novo != NULL){
        novo->valor = num;
        novo->proximo = NULL;

        if (*lista == NULL){
            *lista = novo;
        }
        else{
            aux = *lista;
            while (aux->proximo != NULL)
            {
                aux = aux->proximo;
            }
            aux->proximo = novo;
        }

    }
    else {
        printf("Erro ao alocar memória");
    }
}

void inserir_no_meio(No **lista, int num, int ant){
    No *aux, *novo = malloc(sizeof(No));

    if (novo != NULL){
        novo->valor = num;

        if (*lista == NULL){
            novo->proximo = NULL;
            *lista = novo;
        }
        else{
            aux = *lista;
            while(aux->valor != ant && aux->proximo != NULL){
                aux = aux->proximo;
            }
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }


    }
    else{
        printf("Erro ao alocar memória");
    }
}


No* remove(No **lista, int num){
    No *aux, *remover = NULL;

    if (*lista != NULL){
        if ((*lista)->valor == num){
            remover = *lista;
            *lista = remover->proximo;
        }
    }
    else{
        aux = *lista;
        while (aux->proximo != NULL && aux->proximo->valor != num){
            aux = aux->proximo;
        }
        if (aux->proximo != NULL){
            remover = aux->proximo;
            aux->proximo = remover->proximo;
        }
    }


    return remover;

}

No* buscar(No **lista, int num){
    No *aux, *no = NULL;
    aux = *lista;

    while(aux != NULL && aux->valor != num){
        aux = aux->proximo;
    }
    if (aux != NULL){
        no = aux;
    }

    return no;
}


void imprimir_lista(No *no){
    printf("\n\tLista:");
    while(no != NULL){
        printf("%d ", no->valor);
        no = no->proximo;
    }
    printf("\n\n");
}


int main()
{
    No *remover,*buscado, *lista = NULL;
    int opcao, valor, ant;
    do
    {
        printf("\n0 - Sair\n1 - Inserir ini\n2 - Inserir no Fim\n3 - Inserir no meio\n4- Remover\n5- Imprimir\n6- Buscar");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_inicio(&lista, valor);
            break;

        case 2:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_fim(&lista, valor);
            break;

        case 3:
            printf("Digite um valor e o valor de referência: ");
            scanf("%d %d", &valor, &ant);
            inserir_no_meio(&lista, valor, ant);
            break;

        case 5:
            imprimir_lista(lista);
            break;
        case 4:
            printf("Digite um valor a ser removido: ");
            scanf("%d %d", &valor);
            remover = remove(&lista, valor);
            if (remover != NULL){
                printf("Elemento a ser removido:%d\n", remover->valor );
                free(remover);
            }
            break;
        
        case 6:
            printf("Digite um valor para buscar: ");
            scanf("%d", &valor);
            buscado = buscar(&lista, valor);
            if (buscado != NULL){
                printf("Elemento encontrado: %d\n",buscado );
            }
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
