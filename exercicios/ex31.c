#include <stdio.h>
#include <stdlib.h>


void trocaValores(float *a, float *b){
    float c;
    c = *a;
    *a = *b;
    *b = c;

}


int main()
{
    float num1 = 50, num2 = 101;

    printf("Num1: %2f\tNum2: %2f\n", num1, num2);

    trocaValores(&num1, &num2);
    
    printf("Num1: %2f\tNum2: %2f\n", num1, num2);









    return 0;
}
