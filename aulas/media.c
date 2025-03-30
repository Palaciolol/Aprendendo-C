#include <stdio.h>
#include  <stdlib.h>

int main()
{
    double media, *notas; //será usado como um ponteiro

    int i, n;
    printf("Quantas notas você gostaria de ler?");
    scanf("%d ", &n);

    notas = malloc(n * sizeof(double));

    if (notas == NULL){
        printf("Não há memória suficiente");
        exit(i);

    }
    for (i = 0; i < n; i++){
        scanf("%lf ", &notas[i]);
    }
    media = 0;
    for (i = 0; i< n; i++){
        media += notas[i];

    }
    media = media/n;
    printf("%lf\n", media);
    free(notas);

    return 0;
}
