#include <stdio.h>

int main(void) {

    int soma= 0;
    
    for (int i = 1; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            soma +=i;
        }      
    }  
    printf("A soma dos divisores abaixo de 1000 que sao multiplos de 3 ou 5 eh; %d", soma);
    return 0;
}