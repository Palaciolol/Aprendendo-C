#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[50] = {"Bom dia simpatia!"};
    char str[] = {"dia"};
    char *ponteiro;

    ponteiro = strstr(palavra, str);

    if (ponteiro != NULL){
        printf("\n%c\n", *ponteiro); 
    }

    else
        printf("Ponteiro Nulo.\n");


    //Tokenizar uma sting em C:

    char *pt;

    pt = strtok(palavra," ");
    while (pt != NULL){
        printf("token: %s\n", pt);
        pt = strtok(NULL, " ");
    }






    return 0;
}
