#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, tam = 0;
    char palavras[50] = {"Oi.Vamos aprender a programar com a linguagem C?"};

    //printf("Digite algo: ");
    //scanf("%[^\n]", palavras);

    //fgets(palavras, 50, stdin);
    /*
    i= 0;
    while (palavras[i] != '\0'){
        if (palavras[i] == '\n'){
            palavras[i] = '\0';
        }
        i++;
    }
    i = 0;
    while (palavras[i] != '\0'){
        //printf("%d = %c\n", i, palavras[i++]);
        tam++;
        i++;
    }
    */
    //tam = strlen(palavras);
    //printf("%s\n\n", palavras);
    //printf("Tamanho: %d\n\n", strlen(palavras));

    //Concatenar string:
    char palavras2[50] = {"bola"};
    char palavras3[50] = {"abacate"};
    strcat(palavras2, "Bom dia.");
    printf("%s\n\n", palavras2);

    //Comparar string:
    /*
    0 ->>> Strings exatamente iguais
    -1 ->>> String 1 menor que a String2
    1 ->>> String 1 maior que a String2
    */
    printf("\n\nResultado: %d\n\n", strcmp(palavras2, palavras3));

    //Copiar string:

    strcpy(palavras3, palavras2);
    printf("%s\n\n%s", palavras2, palavras3);

    //Caractere em string:
    // strchr > retorna a primeira ocorrência do caractere.
    // strrchr > retorna a última ocorrência do caractere.

    char teste[50] = {"abacate"};
    char *letra;

    letra = strchr(teste, 'a');

    printf("\n\n%c\n", *letra);

    return 0;
}
