#include <stdio.h>

int main()
{
    int a, b;

    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Valores digitados: a = %d\tb = %d\n", a , b);


    return 0;
}
