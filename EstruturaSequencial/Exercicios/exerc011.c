#include <stdio.h>

int main(void)
{
    float num3, a;
    int num1, num2;
    

    printf("Informe 2 numeros inteiros e um numero real: ");
    scanf("%d %d %f", &num1, &num2 , &num3);

    printf("O produto do dobro do primeiro com metade do segundo %.2f\n", a = (2*num1)*(num2/2));
    printf("A soma do triplo do primeiro com o terceiro. %.2f\n", a = (3*num1)+(num3));
    printf("O terceiro elevado ao cubo %.2f\n", a = (num3*num3*num3));

    return 0;
}