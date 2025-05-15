#include <stdio.h>



int SurpresaAux(int N, int K){
    if (N % 10 == K){
        return 1;
    
    
    }
    return 0;
}

int surpresa(int N, int K){
    if (N == 0){
        return 0;
    }
    return surpresa(N/10, K)+ SurpresaAux(N, K);
}




int main()
{
    int n,k, x;
    x = surpresa(762021192,2);
    printf("%d\n", x);


    return 0;
}
