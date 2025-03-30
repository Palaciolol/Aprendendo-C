#include <stdio.h>

int main()
{
    float num1, num2, num3, ari, pond;
    printf("Digite três notas: ");
    scanf("%f%f%f", &num1, &num2, &num3);

    ari = (num1 + num2 + num3)/3;
    pond = (3*num1 + 3*num2 + 4*num3)/10;

    char resp;
    printf("Você gostaria de fazer uma média aritmética[m] ou ponderada[p] com essas notas?\n");
    scanf(" %c", &resp);

    if (resp == 'm')
        printf("A média aritmética das notas %.1f, %.1f e %.1f é %.1f\n\n",num1, num2, num3, ari);
    
    else if (resp == 'p')
        printf("A média ponderada das notas %.1f, %.1f e %.1f é %.1f\n\n", num1, num2, num3, pond);
    else
        printf("Resposta inválida!\n\n");

    return 0;
}
