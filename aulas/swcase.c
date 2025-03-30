#include <stdio.h>

int main()
{
    int opcao;

    printf("1- Cadastrar produto\n2- Vender produto\n3- Buscar produto\n4- Imprimir\n5- Sair\n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("\n\tCadastrando novo produto\n");
        break;
    
    case 2:
        printf("\n\t Vendendo produto\n");
        break;
    
    case 3:
        printf("\n\tQual o código do produto a ser buscado?\n");
        break;

    case 4:
        printf("\n\tImprimindo relatório ...\n ");
        break;

    case 5:
        printf("\n\tSaindo ... \n");
        break;
    
    default:
        printf("\nOpção inválida\n ");


    }
    

    return 0;
}
