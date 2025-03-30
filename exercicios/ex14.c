#include <stdio.h>

int main()
{
    char test;
    printf("Digite uma letra: ");
    scanf("%c",&test);
    if (test == 'a' || test == 'e' || test == 'i' || test == 'o' || test == 'u')
        printf("É UMA VOGAL!\n");
    else
        printf("é uma consoante ...\n");

    return 0;
}
