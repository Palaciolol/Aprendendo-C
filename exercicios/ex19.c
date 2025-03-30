#include <stdio.h>

int main()
{
    int i, soma = 0;
    //Versão que usa uma condição
    for (i = 0; i<=1000; i++)
        if (i % 2 != 0)
            soma += i; 
    
    printf("A soma dos números ímpares de 1 a 1000 é %d\n\n", soma);
    soma = 0; // resetando a variável soma
    //Versão sem condição
    for (i = 1; i<= 1000; i+=2)
        soma += i;

    printf("A soma dos números ímpares de 1 a 1000 é %d\n\n", soma);

    return 0;
}
