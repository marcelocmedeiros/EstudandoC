#include <stdio.h>

int main(void) {

    float valor, salarioB, iR, descIr, sind, inss;
    int quantidade;
    printf("Qual o valor da hora de trabalho e quantas horas foram laboradas: ");
    scanf("%f %d", &valor, &quantidade);

    salarioB = valor*quantidade;
    sind = salarioB * 0.03;
    inss = salarioB * 0.1;
    
    if (salarioB <= 900)
    {
        iR = 0;
        descIr = 0;              
    }
    else if (salarioB > 900 && salarioB <= 1500)
    {
        iR = 5;
        descIr = salarioB * (iR/100);
    }
    else if (salarioB > 1500 && salarioB <= 2500)
    {
        iR = 10;
        descIr = salarioB * (iR/100);
    }
    else
    {
        iR = 20;
        descIr = salarioB * (iR/100);
    }
    
    printf("Salario Bruto: (%.0f * %d):\tR$%.2f\n", valor, quantidade,  salarioB);
    printf("(-) IR (%.0f)):\t\t\tR$%.2f\n", iR, descIr);
    printf("(-) Sindicato (3)):\t\tR$%.2f\n", sind);
    printf("(-) INSS (11)):\t\t\tR$%.2f\n", inss);
    printf("FGTS (11)):\t\t\tR$%.2f\n",salarioB * 0.11);
    printf("Total de descontos:\t\tR$%.2f\n", sind + inss + descIr);
    printf("Salario Liquido:\t\tR$%.2f\n", salarioB - (sind + inss + descIr));
    

    return 0;
}