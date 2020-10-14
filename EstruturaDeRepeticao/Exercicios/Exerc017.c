#include <stdio.h>

int main(void) {

    int num, soma = 0;
    
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &num);
    while (num <= 0)
    {
        printf("Informe um numero inteiro positivo: ");
        scanf("%d", &num);
       
    }
    for (int i = 0; i <= num; i++)
    {
        soma += i;
    }
    printf("A soma de todos os nuemros de 0 ate %d = %d", num, soma);
    return 0;
}