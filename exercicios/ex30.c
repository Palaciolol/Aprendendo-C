#include <stdio.h>
#include <stdlib.h>


void proced(int *vet, int n , int *maior, int*menor ){
    int mai = 0, men = 10000, i;
    *menor = *vet;
    *maior = *vet;
    for (i = 1; i < n; i++){
        if (*menor > *(vet + 1)){
            *menor = *(vet + i);
        }
        if (*maior < *(vet + i)){
            *maior = *(vet + i);
        }
        }

    }   


int main()
{
    int vetor[10] = {10,2,3,4,5,6,7,9,1}, maior, menor;  

    proced(vetor, 10, &maior, &menor);

    printf("Menor: %d\tMaior: %d\n\n", menor, maior);

    return 0;
}
