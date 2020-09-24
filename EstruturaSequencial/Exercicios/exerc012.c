#include <stdio.h>

int main(void)
{
    float altura;
    
    printf("Qual eh sua altura: ");
    scanf( "%f", &altura);

    printf("O seu peso ideal eh %.2f\n", altura = (72.7*altura) - 58);
   
    return 0;
}