#include <stdio.h>

int main(void)
{
    float valorHora, quantHora, salario;
    

    printf("Informe o valor da hora de trabalho e quantidade de horas trabalhasdas: ");
    scanf("%f %f", &valorHora, &quantHora);

    salario = valorHora*quantHora;

    printf("O seu salario eh R$%.2f", salario);

    return 0;
}