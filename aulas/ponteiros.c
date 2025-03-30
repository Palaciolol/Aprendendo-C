#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void imprimir(int *num){
    printf("%d\n", *num);
    *num = 80;

}



int main()
{
    
    int num = 10;
    int *p;
    char palavra[100];
    scanf("%100[^\n]", palavra);

    p = &num;

    printf("Valor de num: %d\n", num);
    printf("Endereço de memória: %p\n", &num);
    printf("Valor de p: %p\n", p); 
    printf("Endereço de p: %p\n", &p);
    printf("Valor apontado por p: %d\n", *p);
    

   int idade = 35;
   imprimir(&idade);
   printf("No main: %d\n", idade);


    return 0;
}
