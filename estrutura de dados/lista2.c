#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no *proximo;

}No;


typedef struct 
{
    No *inicio;
    int tam;
}Lista;


void criar_lista(Lista *lista){
    lista->inicio = NULL;
    lista->tam = 0;
}



void inserir_no_inicio(Lista *lista, int num){
    No *novo = malloc(sizeof(No));

    if (novo){
        novo->valor = num;
        novo->proximo = lista->inicio;
        lista->inicio = novo;
        lista->tam++;
    }
    else{
        printf("Erro ao alocar memória");
    }

}

void inserir_no_fim(Lista *lista, int num){
    No  *aux, *novo = malloc(sizeof(No));

    if (novo != NULL){
        novo->valor = num;
        novo->proximo = NULL;

        if (lista->inicio == NULL){
            lista->inicio = novo;
        }
        else{
            aux = lista->inicio;
            while (aux->proximo != NULL)
            {
                aux = aux->proximo;
            }
            aux->proximo = novo;
        }
        lista->tam++;

    }
    else {
        printf("Erro ao alocar memória");
    }
}

void inserir_no_meio(Lista *lista, int num, int ant){
    No *aux, *novo = malloc(sizeof(No));

    if (novo != NULL){
        novo->valor = num;

        if (lista->inicio == NULL){
            novo->proximo = NULL;
            lista->inicio = novo;
        }
        else{
            aux = lista->inicio;
            while(aux->valor != ant && aux->proximo != NULL){
                aux = aux->proximo;
            }
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
        lista->tam++;

    }
    else{
        printf("Erro ao alocar memória");
    }
}

void imprimir_lista(Lista lista){
    No *no = lista.inicio;
    printf("\n\tLista tam %d: ", lista.tam);
    while(no != NULL){
        printf("%d ", no->valor);
        no = no->proximo;
    }
    printf("\n\n");
}

No* buscar(Lista *lista, int num){
    No *aux, *no = NULL;
    aux = lista->inicio;

    while (aux != NULL && aux->valor != num){
        aux = aux->proximo;
    }
    if (aux != NULL){
        no = aux;
    }

    return no;
}


int main()
{
    Lista lista;
    int opcao, valor, ant;

    criar_lista(&lista);

    do
    {
        printf("\n0 - Sair\n1 - Inserir ini\n2 - Inserir no Fim\n3 - Inserir no meio\n4- Imprimir\n");
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

        case 4:
            imprimir_lista(lista);
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