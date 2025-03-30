#include <stdio.h>

void enigma(int v[], int esq, int dir){
    int t;
    if (esq >= dir){
        return;
    }
    t = v[esq];
    v[esq] = v[dir];
    v[dir] = t;
    enigma(v, esq + 1, dir -1);

}




int desconhecido(int n){
    if (n == 0){
        return 1;
    }  
    else{
        return n * desconhecido(n-1);
    }
}

int icognita(int n){
    if (n == 0){
        return 1;

    }
    if (n == 1){
        return 1;
    
    }
    else{
        return icognita(n-1) + 2 * icognita(n-2);
    }
}



int main()
{
    int v[5] = {1,2,3,4,5};
    int x;

    
    enigma(v, 0, 4);

    for (x = 0; x < 5; x++){
        printf("%d ", v[x]);
    }
    
    
   x = icognita(8);

   printf("%d\n", x);


    return 0;
}
