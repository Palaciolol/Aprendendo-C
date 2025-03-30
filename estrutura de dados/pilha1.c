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


Pessoa ler_pessoa(){
    Pessoa p;

    scanf("%s%d%d%d",p.nome, &p.data.dia, &p.data.mes, &p.data.ano );
    return p;
}


void Imprimir_pessoa(Pessoa p){
    printf("\nNome: %s\nData: %2d/%2d/%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);

}

No* empilhar(No *topo){
    No *novo = malloc(sizeof(No));

    if (novo){
        novo->p = ler_pessoa();
        novo->proximo = topo;
        return novo;



    }
    else{
        printf("Erro ao alocar memória");
    }
    return NULL;
}

No* desempilhar(No **topo){
    if (*topo != NULL){
        No *remover = *topo;
        *topo = remover->proximo;
        return remover;

    }
    else{
        printf("\nPilha Vazia\n");
    }
    return  NULL;
}

void Imprimir_pilha(No *topo){
    printf("\n-------- PILHA --------\n");

    while (topo != NULL){
        Imprimir_pessoa(topo->p);
        topo = topo->proximo;
    }

    printf("\n-------- FIM DAPILHA --------\n");

}

int main()
{
    No *remover, *topo = NULL;
    int opcao;

    do
    {
        printf("\n0 - SAiR\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
            topo = empilhar(topo);
            break;
        
        case 2:
            remover = desempilhar(&topo);
            if (remover != NULL){
                printf("Elemento removido com sucesso");
                Imprimir_pessoa(remover->p);
            }
            else{
                printf("Sem nó a remover");
            }
            break;
        
        case 3:
            Imprimir_pilha(topo);
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
