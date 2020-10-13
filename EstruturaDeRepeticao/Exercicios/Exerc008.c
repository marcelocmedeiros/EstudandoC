#include <stdio.h>

int main(void) {

    int maior = 0, menor = 0, num;

    for (int i = 1; i <= 10; i++)
    {
        printf("Informe o %d numero: ", i);
        scanf("%d", &num);

        if (num > maior)
        {
            maior = num;
        }
        else if (num < menor)
        {
            menor = num;
        }       
        
    }
    
    printf("Menor %d\n", menor);
    printf("Maior %d", maior);
    
    return 0;
}