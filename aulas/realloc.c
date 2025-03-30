#include <stdio.h>
#include <stdlib.h>

int mai()
{
    int *vet, tam, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    srand(time(NULL));

    vet = malloc(tam * sizeof(int));

    if (vet){
        printf("Memória alocada com sucesso\n");
        for (i = 0; i< tam; i++){
            *(vet + i) = rand() % 100;
        }
        for (i = 0; i < tam; i++){
            printf("%d ", *(vet + i));
        }
        printf("Digite o novo tamanho do vetor: ");
        scanf("%d", &tam);
        vet = realloc(vet, tam);

        for (i = 0; i < tam; i++){
            printf("%d ", *(vet + i));

        }
    }
    else
    {
        printf("Erro ao alocar memória.");
    }





    return 0;
}
