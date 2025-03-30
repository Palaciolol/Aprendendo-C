#include <stdio.h>

int main()
{
    int senha;
    printf("Digite a senha '123456': ");
    scanf("%d", &senha);

    while (senha != 123456){
        printf("Senha incorreta, digite '123456': ");
        scanf("%d", &senha);
    }
    
    printf("Senha Cadastrada!\n\n");

    return 0;
}
