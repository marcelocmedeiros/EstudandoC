#include <stdio.h>

int main(void) {

    float salario, salarioN, perc, aumento;
    printf("Informe seu salario: ");
    scanf("%f", &salario);

    if (salario < 280)
    {
        perc = 20;
        aumento = salario *(perc/100);
        salarioN = salario + aumento;        
    }
    else if (salario >= 280 && salario < 700)
    {
        perc = 15;
        aumento = salario *(perc/100);
        salarioN = salario + aumento;
    }
    else if (salario >= 700 && salario < 1500)
    {
        perc = 10;
        aumento = salario *(perc/100);
        salarioN = salario + aumento;
    }
    else
    {
        perc = 5;
        aumento = salario *(perc/100);
        salarioN = salario + aumento;
    }
    
    printf("O salario antes do reajuste R$%.2f\n", salario);
    printf("O percentual de aumento %.0f porcento.\n", perc);
    printf("O valor do aumento R$%.2f\n", aumento);
    printf("O novo salario R$%.2f\n", salarioN);
    

    return 0;
}