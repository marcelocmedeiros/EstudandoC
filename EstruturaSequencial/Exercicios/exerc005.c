#include <stdio.h>

int main(void)
{
    float metros,cm;
    

    printf("Informe o tamanho em metros: ");
    scanf("%f", &metros);

    cm = metros*100;

    printf("O tamanho em centimetros eh %.2fcm", cm);

    return 0;
}