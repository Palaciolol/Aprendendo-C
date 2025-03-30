#include <stdio.h>


void imprimir(int vet[], int tam){
    int i;
    for (i = 0; i< tam; i++){
        printf("%d ", *(vet + i));
    printf("\n");
    }
}



int main()
{
    int vet[10] = {1,2,3,4,5,6,7,8,9, 10};

    imprimir(vet,10);




    return 0;
}
