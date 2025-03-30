#include <stdio.h>

int main()
{
    int A, *B, **C, ***D;

    printf("Digite um número: ");
    scanf("%d", &A);

    B = &A;
    C = &B;
    D = &C;

    printf("Dobro: %d\nTriplo: %d\nQuádruplo: %d\n",2 * *B, 3 * **C, 4 * ***D);

    return 0;
}
