#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int num2[10];
    /*
    int num2[] = {1,5,3,4,24};
    int num3[5] = {4,7,5};
    int num5[5] = {0}; // para evitar lixo de memória.O computador completa o resto do vetor com zeros.
    
    char letras[100];
    char vogais[5] = {'a', 'e', 'i' , 'o', 'u'};

    float notas[3] = {7.5,5.6,3.5};

    for (i = 0; i < 5; i++)
        printf("%d", num2[i]);
    */

   for (i = 0; i < 10; i++){
        printf("Digite o valor do vetor: ");
        scanf("%d",&num2[i]);
   }
    






    return 0;
}
