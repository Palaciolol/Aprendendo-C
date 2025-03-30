#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nomes[5][25], xd;
    int l;

    for (l = 0; l < 5; l++){
        printf("\nDigite o nome da posição %d: ", l);
        scanf("%25[^\n]", nomes[l]);
        scanf("%c", &xd);
        
    }

    for (l = 0; l < 5; l++){
        printf("\nNome na posição %d: %s", l, nomes[l]);
    }





    return 0;
}
