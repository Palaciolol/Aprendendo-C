#include <stdio.h>

int main()
{
    int segundos, h , m, s, r;
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);


    h = segundos/ 3600;
    r = segundos % 3600;
    m = r / 60;
    s = r % 60;

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}
