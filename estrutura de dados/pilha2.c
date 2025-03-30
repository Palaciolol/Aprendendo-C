#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int dia, mes, ano;

}Data;

typedef struct{
    char nome[50];
    Data data;
}Pessoa;

typedef struct no
{
    Pessoa p;
    struct no *proximo;
}No;


typedef struct 
{
    No *topo;
    int tam;

}Pilha;

void criar_pilha(Pilha *p){
    p->topo = NULL;
    p->tam = 0;
}


Pessoa ler_pessoa(){
    Pessoa p;

    scanf("%s%d%d%d",p.nome, &p.data.dia, &p.data.mes, &p.data.ano );
    return p;
}


void Imprimir_pessoa(Pessoa p){
    printf("\nNome: %s\nData: %2d/%2d/%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);

}

void empilhar(Pilha *p){
    No *novo = malloc(sizeof(No));

    if (novo){
        novo->p = ler_pessoa();
        novo->proximo = p->topo;
        p->topo = novo;
        p->tam++;

    }
    else{
        printf("Erro ao alocar memória");
    }
    
}

No* desempilhar(Pilha *p){
    if (p->topo != NULL){
        No *remover = p->topo;
        p->topo = remover->proximo;
        p->tam--;
        return remover;


    }
    else{
        printf("\nPilha Vazia\n");
    }
    return  NULL;
}

void Imprimir_pilha(Pilha *p){
    No *aux = p->topo;
    printf("\n-------- PILHA --------\n");

    while (aux != NULL){
        Imprimir_pessoa(aux->p);
        aux = aux->proximo; 
    }

    printf("\n-------- FIM DA PILHA --------\n");

}


int main()
{
    No *remover;
    Pilha p;
    int opcao;

    criar_pilha(&p);

    do
    {
        printf("\n0 - SAiR\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
            empilhar(&p);
            break;
        
        case 2:
            remover = desempilhar(&p);
            if (remover != NULL){
                printf("Elemento removido com sucesso");
                Imprimir_pessoa(remover->p);

                free(remover);
            }
            else{
                printf("Sem nó a remover");
            }
            break;
        
        case 3:
            Imprimir_pilha(&p);
            break;


        default:
            if (opcao != 0){
                printf("Opção Inválida");
            }
            break;
        }

    } while (opcao != 0);
    
    
    return 0;
}