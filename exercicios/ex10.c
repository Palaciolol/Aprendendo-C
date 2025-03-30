#include <stdio.h>

int main()
{
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        if (num % 3 == 0 && num % 5 == 0)
            printf("O número %d é divisível por 2,3 e 5\n\n", num);

        else if (num % 3 == 0)
            printf("O número %d é divisível por 2 e 3\n\n", num);
        
        else
            printf("O número %d é divisível apenas por 2\n\n",num);
            
    }
    else if (num % 3 == 0){
        if (num % 5 == 0)
            printf("O número %d é divisível por 3 e 5\n\n", num);
        else
            printf("O número %d é divisível apenas  por 3\n\n", num);
    }

    else if (num % 5 == 0)
        printf("O número %d é divisível por 5\n\n", num);

    else
        printf("O número %d não é divisível nem por 2, nem por 3, nem por 5!\n\n", num);

    return 0;
}
