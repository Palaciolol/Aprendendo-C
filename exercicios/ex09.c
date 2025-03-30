#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5, pos, neg;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num1);

    printf("Agora o seguno valor: ");
    scanf("%d", &num2);

    printf("Agora o terceiro valor: ");
    scanf("%d", &num3);

    printf("Que tal um quarto valor: ");
    scanf("%d", &num4);

    printf("O último eu juro!");
    scanf("%d", &num5);

    pos = 0;
    neg = 0;

    if (num1 > 0)
        pos += 1;
    
    else
        neg += 1;
    
    if (num2 > 0)
        pos += 1;
    
    else
        neg += 1;
    
    if (num3 > 0)
        pos += 1;
    
    else
        neg += 1;

    if (num4 > 0)
        pos += 1;
    
    else
        neg += 1;

    if (num5 > 0)
        pos += 1;
    
    else
        neg += 1;


    printf("Ao todo, você digitou %d valores positivos e %d negativos\n\n", pos , neg);

    return 0;
}
