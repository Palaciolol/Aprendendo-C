#include <stdlib.h>
#include <stdlib.h>
#define TAM 31



void iniciar_tabela(int t[]){
    for (int i = 0; i < TAM; i++){
        t[i] = 0; // o zero não faz parte do conjunto de dados que eu pretendo utilizar

    }
}

int funcao_hash(int chave){
    return chave % TAM;
}



void inserir(int valor, int tabela[]){
    int id = funcao_hash(valor);
    while (tabela[id] != 0){
        id = funcao_hash(id +1);
    }
    tabela[id] = valor;
}


int busca(int tabela[], int valor_procurado){
    int id = funcao_hash(valor_procurado);
    while (tabela[id] != 0){
        if (tabela[id] == valor_procurado){
            return tabela[id];
        }
        else{
            id = funcao_hash(id + 1);
        }
    }
    return 0;
}




void imprimir_tabela(int tabela[]){
    for (int i = 0; i < TAM; i++){
        printf("%d = %d\n", i, tabela[i]); //isso daqui vai imprimir um monte de 0 ...
    }
}





int main()
{
    int tabela[TAM];
    int opcao;
    int valor;
    int retorno;

    iniciar_tabela(tabela);

    do
    {
        printf("\n\t0- SAIR\n\t1- INSERIR\n\t2- BUSCAR\n\t3- IMPRIMIR\n");
        scanf("%d", &opcao);


        switch (opcao)
        {
        case 1:
            printf("Qual valor deseja inserir? ");
            scanf("%d", valor);
            inserir(tabela, valor);
            break;

        case 2:
            printf("Qual valor deseja buscar? ");
            scanf("%d", valor);
            retorno = busca(tabela, valor);
            if (retorno != 0){
                printf("Valor encontrado: %d\n", retorno);
            }
            else{
                printf("Valor não encontrado");
            }
            break;

        default:
            break;
        }

    } while (opcao != 0);
    

    return 0;
}
