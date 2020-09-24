#include <stdio.h>

int main(void)
{
    float valorHora, quantHora, salario;
    

    printf("Informe o valor da hora de trabalho e quantidade de horas trabalhasdas: ");
    scanf("%f %f", &valorHora, &quantHora);

    salario = valorHora*quantHora;

    printf("+ Salario Bruto :\tR$%.2f\n\n", salario);
    printf("- IR (11) : \t\tR$%.2f\n\n", salario*0.11);
    printf("- INSS (8) : \t\tR$%.2f\n\n", salario*0.08);
    printf("- Sindicato (5) : \tR$%.2f\n\n", salario*0.05);
    printf("= Salario Liquido : \tR$%.2f\n\n", salario - (salario*0.11) - (salario*0.08) - (salario*0.05));

    return 0;
}