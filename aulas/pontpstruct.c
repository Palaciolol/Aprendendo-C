#include <stdio.h>


typedef struct {
    int dia, mes, ano;

}Data;

void imprimedata(Data *x){
    printf("%d/%d/%d\n",x->dia, x->mes, x->ano);

}


int main()
{
    Data data;
    Data *p;

    p = &data;

    data.dia = 29;
    data.mes = 2;
    data.mes = 2021;
    imprimedata(p);

    return 0;
}
