#include <stdio.h>

int main(void) {

    int semana;
    printf("Informe um numero de 1 - 7 para o dia da semana:");
    scanf("%d", &semana);
    switch (semana)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda-Feira");
        break;
    case 3:
        printf("Terça-Feira");
        break;
    case 4:
        printf("Quarta-Feira");
        break;
    case 5:
        printf("Quinta-Feira");
        break;
    case 6:
        printf("Sexta-Feira");
        break;
    case 7:
        printf("Sabado");
        break;   
    default:
        printf("Valor invalido...");
        break;
    }
    return 0;
}