#include <stdio.h>

int main(void)
{
    int num1, num2, soma;

    printf("Informe dois numero: ");
    scanf("%d %d", &num1, &num2);
    soma = num1 + num2;

    printf("A soma dos dois numeros eh %d", soma);

    return 0;
}