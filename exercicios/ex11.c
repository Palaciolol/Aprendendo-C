#include <stdio.h>

int main()
{
    float real, dolar;
    int opcao;
    printf("Você gostaria de transformar de real para dólar(1) ou de dólar para real(2)?");
    scanf("%d",&opcao);

    switch (opcao){
        case 1 :
            printf("Informe a quantidade em reais que você quer converter:$ ");
            scanf("%f", &real);
            dolar = real/5.30;
            printf("Você tem $%f dólares\n\n",dolar);
        case 2 :
            printf("Informe a quantidade em dólares que gostaria de converter:$ ");
            scanf("%f", &dolar);
            real = dolar * 5.30;
            printf("Você tem $%f reais\n\n", real);


        default :
            printf("Opção inválida\n\n");
    }

    return 0;
}
