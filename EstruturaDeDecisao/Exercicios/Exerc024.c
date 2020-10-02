#include <stdio.h>
int main()
{
    char operacao;
    float num1, resultado,
    num2;
    int auxiliar, resultadoInt;
    
    printf("Escolha sua operação [+ - * / ]: ");
    scanf("%c",&operacao);
    
    printf("Entre com o primeiro numero: ");
    scanf("%f",&num1);
    printf("Entre com o segundo numero: ");
    scanf("%f",&num2);
    
    switch( operacao )
    {
    case '+':
    resultado = num1 + num2;
    break;
    case '-':
    resultado = num1 - num2;
    break;
    case '*':
    resultado = num1 * num2;
    break;
    case '/':
    resultado = num1 / num2;
    break;
    default:
    printf("Voce digitou uma operacao invalida.");
    }

    printf("O resultado da operacao foi %.2f\n", resultado);
    
    resultadoInt = (int) resultado;

    if (resultadoInt % 2 == 0)
    {
        printf("Este numero eh Par\n");
    }
    else
    {
        printf("Este numero eh Impar\n");
    }
    if (resultado > 0)
    {
        printf("O numero eh Positivo\n");
    }
    else
    {
        printf("O numero eh Negativo\n");
    }
    
    auxiliar = resultado;

    if (auxiliar == resultado)
    {
        printf("E o numero eh inteiro\n");
    }
    else
    {
        printf("E o numero eh decimal\n");
    }
    
}