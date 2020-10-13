#include <stdio.h>

int main(void) {

    int soma = 0, num;

    for (int i = 1; i <= 10; i++)
    {
        printf("Informe o %d numero: ", i);
        scanf("%d", &num);
        soma += num;
    }
    
    printf("A soma dos dez numeros foi %d", soma);
    return 0;
}