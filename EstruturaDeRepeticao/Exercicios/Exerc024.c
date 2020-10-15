#include <stdio.h>

int main(void) {

    int num, soma= 0;
    printf("Informe uma numero inteiro positivo: \n>");
    scanf("%d", &num);
    while (num <=0 )
    {
        printf("Informe uma numero inteiro positivo: \n>");
        scanf("%d", &num);
    }
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            soma +=i;
        }      
    }  
    printf("A soma de todos os divisores de %d eh: %d", num, soma);
    return 0;
}