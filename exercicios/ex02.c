#include <stdio.h>

int main()
{
    int a , b ;

    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);

    int c = a;
    a = b;
    b = c;

    printf("Valores digitados: b = %d\ta = %d\n", b , a);






    return 0;
}
