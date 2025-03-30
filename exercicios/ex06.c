#include <stdio.h>

int main()
{
    float v_reais, v_dolar;

    printf("Diite a quantia em reais que você deseja converter para dólar: ");
    scanf("%f", &v_reais);

    v_dolar = v_reais / 5.3;
    printf("Valor em dólar: $%.2f\n", v_dolar);

    return 0;
}
