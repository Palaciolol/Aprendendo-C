#include <stdio.h>

int main()
{
    int valor, i , quant;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    for (i = 1; i<= valor; i++)
        if (valor % i == 0)
            quant += 1;
    
    if (quant == 2)
        printf("O número é primo!\n\n");
    else
        printf("Não é primo!\n\n");


    return 0;
}
