#include <stdio.h>

int main(void) {

    int soma = 0, num;
    float media;

    for (int i = 1; i <= 10; i++)
    {
        printf("Informe o %d numero: \n", i);
        scanf("%d", &num);

        if (num < 0)
        {
            printf("Informe o %d numero: \n", i);
            scanf("%d", &num);
        }
        soma += num;
    }
    media = soma / 10.0;
    printf("A media dos 10 numero inteiro positivos foi %.2f", media);
   
    return 0;
    
}