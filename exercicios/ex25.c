#include <stdio.h>

int main()
{
    int soma = 0,i, din = 1 ;
    for (i = 1;i <= 30; i++)
        din = din * 2;
        soma += din;

    printf("A soma dos valores guardados é %d\n", din);
    return 0;
}
