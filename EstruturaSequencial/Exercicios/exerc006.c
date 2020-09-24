#include <stdio.h>

int main(void)
{
    float raio,area, pi = 3.1415;
    

    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);

    area = pi*raio*raio;

    printf("O tamanho em centimetros eh %.2f", area);

    return 0;
}