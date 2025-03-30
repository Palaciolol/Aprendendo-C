#include <stdio.h>

int main()
{
    char sexo;
    int idade;
    float peso, altura;

    printf("Digite seu sexo, idade, peso e altura: \n");
    scanf("%c%d%f%f", &sexo, &idade,&peso, &altura);

    printf("Sexo: %c\n", sexo);
    printf("Idade: %d\n", idade);
    printf("Peso: %.2f\n", peso);
    printf("Altura: %.2f\n", altura);
    


    return 0;
}
