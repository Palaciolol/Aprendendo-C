#include <stdio.h>


int main()
{
    int vet[10] = {1,2,3,4,5,6,7,8,9,10};


    for (int i = 0; i < 10; i++){
        printf("Endereço: %p\t\tValor: %d\n", &vet[i], vet[i]);
    }

    
    return 0;
}
