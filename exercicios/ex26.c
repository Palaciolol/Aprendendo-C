#include <stdio.h>

int main()
{
    float massa;
    scanf("%f", &massa);
    int tempo = 0;

    while (massa >= 0.05)
    {
        massa = massa/2;
        tempo += 50;
    }
    
    printf("O tempo total para a massa ser inferior a 0.05 gramas é %d\n\n", tempo);
    
    return 0;
}
