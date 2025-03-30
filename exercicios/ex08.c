#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Digite três valores inteiros: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3){
        if (num2 > num3)
            printf("O número %d é o maior e o %d é o menor\n", num1, num3);
        else
            printf("O número %d é o maior e o %d é o menor\n", num1, num2);
    }
    else if (num2 > num1 && num2 > num3){
        if (num1 > num3)
            printf("O número %d é o maior e o %d é o menor\n", num2, num3);
        else
            printf("O número %d é o maior e o %d é o menor\n", num2, num1);
    }
    else {
        if (num1 > num2)
            printf("O número %d é o maior e o %d é o menor\n", num3, num2);
        else   
            printf("O número %d é o maior e o %d é o menor", num3, num1);
    }
    return 0;
}


