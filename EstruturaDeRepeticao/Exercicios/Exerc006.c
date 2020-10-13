#include <stdio.h>

int main(void) {

    int soma = 0, num;
    float media;

    for (int i = 1; i <= 10; i++)
    {
        printf("Informe o %d numero: ", i);
        scanf("%d", &num);
        soma += num;
    }
    media = soma/10;
    printf("A soma dos dez numeros foi %.2f", media);
    return 0;
}