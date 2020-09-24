#include <stdio.h>

int main(void)
{
    float temp, Fahr;
    

    printf("Informe a teperatura: ");
    scanf("%f", &temp);

    Fahr = temp * 1.8 + 32;

    printf("A temperatura em Fahrenheit eh %.2f", Fahr);

    return 0;
}