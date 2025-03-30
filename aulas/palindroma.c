#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[30], copia[30];
    int i, tam, cont = 0;
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    tam = strlen(palavra);

    for (i = 0; i < strlen(palavra) ; i++){
        copia[i] = palavra[tam -1];
        tam--;
    }

    copia[i] = '\0';

    tam = strlen(palavra);

    for (i = 0; i< tam; i++){
        if (palavra[i] == copia[i]){
            cont++;
        }
    }
    
    if (tam == cont){
        printf("\nÉ palíndroma\n");
    
    }
    else
        printf("\nNão é palíndroma ... ");


   i = 0;
    tam = strlen(palavra);
    tam--;
    int cont2;
    while (tam >= i){
        if (palavra[i] != palavra[tam]){
            cont2++;
        }
        i++;
        tam--;


    }

    if (cont2 == 0){
        printf("\n\nÉ palíndroma");
    }
    else
        printf("\n\nNão é palíndroma");

    return 0;
}
