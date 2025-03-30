#include <stdio.h>
#include <stdlib.h>


void imprimevetor(int vetor[]){
    int i;
    for (i = 0; i < 10; i++){
        printf("%d", vetor[i]);

    }
}
void levetor(int vetor[], int n){
    int i;
    printf("Digite %d números\n:", n);
    for (i = 0; i< n; i++){
        scanf("%d", &vetor[i]);
    }
}

int somavetor(int vet1[], int vet2[], int n){
    int i;
    for (i = 0; i < n; i++){
        
    }
}

int main()
{
    int vet1[25], vet2[25] , vet3[25];

    levetor(vet1, 25);
    levetor(vet2, 25);







    return 0;
}
