#include <stdio.h>

int main()
{  
    int opcao;
    do
    {
        printf("\n\tCALCULAORA\n");
        printf("1- SOMAR\n2-SUBTRAIR\n3-MULTIPLICAR\n4-DIVIDIR\n0-SAIR\n");
        scanf("%d", &opcao);
        switch (opcao){
        
        case 0:
            printf("Finalizando ...\n\n");
            break;

        case 1:
            float valor1,valor2,soma;
            printf("Digite dois valores para somar: ");
            scanf("%f%f", &valor1, &valor2);
            soma = valor1 + valor2;
            printf("Soma: %f",soma);
            break;

        case 2:
            float subtracao;
            printf("Digite dois valores para subtrair: ");
            scanf("%f%f", &valor1, &valor2);
            subtracao = valor1 - valor2;
            printf("Subtração: %f",subtracao);
            break;

        case 3:
            float multiplicacao;
            printf("Digite dois valores para multiplicar: ");
            scanf("%f%f", &valor1, &valor2);
            multiplicacao = valor1 * valor2;
            printf("Multiplicação: %f", multiplicacao);
            break;

        case 4:
            float divisao;
            printf("Digite dois valores para dividir: ");
            scanf("%f%f",&valor1, &valor2);
            while (valor2 == 0){
                printf("Não é possível dividir por 0! Digite um valor válido: ");
                scanf("%f", &valor2);
            }
            divisao = valor1/valor2;

            printf("Divisão: %f",divisao);
            break;

        default:
            printf("Opção inválida");
        
        }
    }
    while (opcao != 0);
   
    return 0;

}