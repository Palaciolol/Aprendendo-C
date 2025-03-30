#include <stdio.h>
#include <stdlib.h>


void imprimevetor(int vetor[]){
    int i;
    for (i = 0; i < 10; i++){
        printf("%d\n",vetor[i]);
        
    }
}

int main()
{
    int i,vet1[10],vet2[10];

    for (i = 0; i < 10 ; i++){
        printf("Digite os valores de um vetor: ");
        scanf("%d", &vet1[i]);
    }

    for (i = 0; i < 10; i++){
        vet2[i] = vet1[i] * vet1[i];
    }

   imprimevetor(vet1);
   imprimevetor(vet2);

    return 0;
}
