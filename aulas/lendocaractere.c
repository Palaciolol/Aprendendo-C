#include <stdio.h>

int main()
{
    char sexo = 's';

    printf("Valor da variaável sexo: %c\n", sexo);
    

    char letra;

    printf("Digite um caractere: ");
    letra = getc(stdin);

    printf("Caractere lido: %c", letra);

    return 0;
}
