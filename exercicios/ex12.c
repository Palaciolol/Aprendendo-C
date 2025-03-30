#include <stdio.h>

int main()
{
    printf("\t\tCAlCULADORA DE IMC!\n\n");

    float peso, altura, imc;

    printf("Informe seu peso[KG] e sua altura[M]: ");
    scanf("%f%f", &peso, &altura);

    imc = peso/(altura*altura);

    if (imc < 18.5)
        printf("Seu IMC é %f e você se encontra abaixo do peso\n\n", imc);
    else if (imc >= 18.5 && imc < 25)
        printf("Seu IMC é %f e você está com o peso normal\n\n", imc);
    else if (imc >= 25 && imc < 30)
        printf("Seu IMC é %f e você está com Sobrepeso\n\n", imc);
    else if (imc >=30 && imc < 35)
        printf("Seu IMC é %f e você está com obesidade grau 1\n\n", imc);
    else if (imc >= 35 && imc < 40)
        printf("Seu IMC é %f e você está com Obesidade grau 2\n\n", imc);
    else
        printf("Seu IMC é %f e você está com Obesidade grau 3\n\n", imc);

    return 0;
}
