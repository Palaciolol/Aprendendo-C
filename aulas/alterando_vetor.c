#include <stdio.h>
#include <stdlib.h>





typedef struct vetor *p_vetor;

struct vetor {
int *dados;
int n;
int alocado;
};



p_vetor criar_vetor(int tam) {
    p_vetor v;
    v = malloc(sizeof(struct vetor));
    v->dados = malloc(tam * sizeof(int));
    v->n = 0;
    v->alocado = tam;
    return v;
}





void adicionar_elemento(p_vetor v, int x) {
    int i, *temp;
    if (v->n == v->alocado) {
        temp = v->dados;
        v->alocado *= 2;
        v->dados = malloc(v->alocado * sizeof(int));
        for (i = 0; i < v->n; i++)
        v->dados[i] = temp[i];
        free(temp);
        }
    v->dados[v->n] = x;
    v->n++;
}

int main()
{
    




    return 0;
}
