#include <stdio.h>

int main()
{
    
    float numero = 3.1415;

    printf("Valor da minha variável: %.4f\n",numero);

    printf("Digite um número real:");
    scanf("%f", &numero);

    printf("Valor lido: %.2f", numero);

    int valor, valor2;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &valor);

    printf("Digite outro número inteiro:");
    scanf("%d", &valor2);

    printf("\nPrimeiro valor: %d\nSegundo valor: %d\n", valor, valor2);
    return 0;
}
