#include <stdio.h>

int main()
{
    float total, gorjeta;
    int pessoas;
    printf("Digite o valor total da despesa no restaurante e a porcentagem de gorjeta: \n");
    scanf("%f%f", &total, &gorjeta);

    printf("Agora informe a quantidade total de pessoas para dividir a conta: ");
    scanf("%d", &pessoas);
    // Caso a gorjeta já esteja incluída no valor total:

    float valor_por_pessoa;
    valor_por_pessoa = total/pessoas;

    printf("Valor que cada um deve pagar caso a gorjeta já esteja incluída: %.1f\n", valor_por_pessoa);

    // Caso a gorjeta não esteja incluída no valor total:

    float valor_da_gorjeta;
    valor_da_gorjeta = (gorjeta/100) * total;
    valor_por_pessoa = (valor_da_gorjeta/pessoas) + (total/pessoas);

    printf("Valor que cada um deve pagar caso a gorjeta não esteja incluída: %.1f\n", valor_por_pessoa);


    return 0;
}
