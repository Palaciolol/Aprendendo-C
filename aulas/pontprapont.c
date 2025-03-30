#include <stdio.h>

int main()
{
    int A = 100, *B, **C;

    B = &A;


    printf("Endereço de A: %p\tConteúdo de A: %d", &A, A);
    printf("Endereço de B: %p\tConteúdo de B: %d", &B, B);
    printf("Conteúdo apontado por B: %d\n", *B);
    printf("Endereço de C: %p\tConteúdo de C: %d", &C, C);
    printf("Conteúdo apontado por C: %d\n", **C);





    return 0;
}
