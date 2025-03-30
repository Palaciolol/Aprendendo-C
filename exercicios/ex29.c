#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int tam = 5;
void imprimeMatriz(int m[][5]){
    int i, j;

    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }   
}

int somarlinha(int x[][5], int l){
    int c, soma = 0;

    for (c = 0; c < tam; c++){
        soma += x[l][c];
    }
    return soma;
}



int main()
{
    int mat[5][5];
    int i,j, res;

    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            mat[i][j] = rand() % 10;
        }
    }

    imprimeMatriz(mat);

    for (i = 0; i < tam; i++){
        printf("A soma da linha %d é: %d\n\n", i, somarlinha(mat,i));
    }



    return 0;
}
