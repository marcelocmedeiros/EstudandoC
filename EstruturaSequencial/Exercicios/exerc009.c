#include <stdio.h>

int main(void)
{
    float temp, cels;
    

    printf("Informe a teperatura: ");
    scanf("%f", &temp);

    cels = 5 * ((temp-32) / 9);

    printf("A temperatura em Celsius eh %.2f", cels);

    return 0;
}