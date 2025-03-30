#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x;

    x = calloc(1, sizeof(int));

    if (x){
        printf("Memória alocada com sucesso\n");
        *x = 50;
        printf("%d\n", *x);
    }
    else{
        printf("Erro ao alocar memória\n");
    }





    return 0;
}
