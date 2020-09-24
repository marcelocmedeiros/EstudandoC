#include <stdio.h>

int main(void)
{
    float alturaH, alturaM, altura;
    
    printf("Qual altura do homem e da mulher: ");
    scanf( "%f %f", &alturaH, &alturaM);

    printf("O seu peso ideal para homens: eh %.2f\n", altura = (72.7*alturaH) - 58);
    printf("O seu peso ideal para mulheres: eh %.2f\n", altura = (62.1*alturaM) - 44.7);
    return 0;
}