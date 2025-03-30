#include <stdio.h>

int main()
{
    int mes;
    printf("Digite o número de um mês: ");
    scanf("%d",&mes);

    switch (mes){
        case 1 :
            printf("O mês 1 é janeiro!\n\n");
            break;
        case 2 : 
            printf("O mês 2 é fevereiro!\n\n");
            break;
        case 3 :
            printf("O mês 3 é março!\n\n");
            break;
        case 4 :
            printf("O mês 4 é abril!\n\n");
            break;
        case 5 :
            printf("O mês 5 é maio!\n\n");
            break;
        case 6 :
            printf("O mês 6 é junho!\n\n");
            break;
        case 7 :
            printf("O mês 7 é julho!\n\n");
            break;
        case 8 :
            printf("O mês 8 é agosto!\n\n");
            break;
        case 9 :
            printf("O mês 9 é setembro!\n\n");
            break;
        case 10 :
            printf("O mês 10 é outubro!\n\n");
            break;
        case 11 :
            printf("O mês 11 é novembro!\n\n");
            break;
        case 12 :
            printf("O mês 12 é dezembro!\n\n");
            break;

        default :
            printf("Mês inválido!\n\n");

    }
        
    return 0;
}
