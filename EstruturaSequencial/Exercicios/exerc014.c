#include <stdio.h>

int main(void)
{
    float pesoPeixe, pesoMax = 50, pesoExec, multa = 4, totMulta;
    
    printf("Quantos quilos o peixe tem: ");
    scanf( "%f", &pesoPeixe);

    printf("Voce pescou um peixe de %.2fKg\n", pesoPeixe);
    printf("O peso maximo permitido eh 50Kg e voce excedeu em %.2fKg\n", pesoExec = pesoPeixe - pesoMax);
    printf("A multa por excesso de peso de peixe eh R$4,00 por quilo\nAssim sua multa eh de R$%.2f\n", totMulta = multa*pesoExec);

    return 0;
}