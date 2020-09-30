#include <stdio.h>

int main(void) {

    float lado1, lado2, lado3;
    printf("Informe os 3 lados: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    if (lado1 + lado2 > lado3 && lado3 + lado2 > lado1 && lado3 + lado1 > lado2)
    {
        if (lado1 == lado2 && lado2 == lado3)
        {
            printf("Triangulo Equilatero");
        }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
        {
            printf("Triangulo  Isosceles");
        }
        else
        {
            printf("Triangulo   Escaleno");
        }
        
    }
    else
    {
        printf("Os 3 lados nao formam um trinagulo...");
    }
    
    return 0;
}