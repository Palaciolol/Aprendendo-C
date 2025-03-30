#include <stdio.h>

int main()
{
    int valor, i;

    printf("Digite um valor que gostaria de saber a tabuada: ");
    scanf("%d", &valor);

    for (i = 0; i<=10;i++)
        printf(" %d * %d = %d\n\n", valor, i, valor * i);



    return 0;
}
