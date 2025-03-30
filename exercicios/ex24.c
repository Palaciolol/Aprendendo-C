#include <stdio.h>

int main()
{
    int n, i, soma = 0;
    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);
    if (n > 0){
        for (i = 0;i<=n;i++)
            soma += i;
        printf("Soma: %d\n\n", soma);
    }
    else
        printf("Valor inválido!");




    return 0;
}
