#include <stdio.h>

int main()
{
    float nota1,nota2 ,media = 0;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);

    while (nota1 < 0 || nota1 > 10){
        printf("Nota inválida.Informe uma nota condizente: ");
        scanf("%f", &nota1);

    }
    printf("Agora informe a segunda nota desse aluno: ");
    scanf("%f", &nota2);

    while (nota2 < 0 || nota2 > 10)
    {
        printf("Nota inválida.Informe uma nota condizente: ");
        scanf("%f", &nota2);

    }
    
    media = (nota1 + nota2)/2;
    printf("A média semestral desse aluno é %f\n\n", media);


    return 0;
}
