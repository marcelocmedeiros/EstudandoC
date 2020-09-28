/*
A sintaxe do switch é a seguinte:
switch( opção )
{
    case opção1:
        comandos caso a opção 1 tenha sido escolhida
        break; 
    case opção2:
        comandos caso a opção 2 tenha sido escolhida
        break;
case opção3:
        comandos caso a opção 3 tenha sido escolhida
        break;
default:
        comandos caso nenhuma das opções anteriores tenha sido escolhida
}
*/
#include <stdio.h>
int main()
{
    char operacao;
    float num1, num2;

    printf("Escolha sua operacao [+ - * / ]: ");
    scanf("%c",&operacao);

    printf("Entre com o primeiro numero: ");
    scanf("%f",&num1);

    printf("Entre com o segundo numero: ");
    scanf("%f",&num2);

    switch( operacao )
    {
        case '+':
        printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
        break; // realiza ferificaçãoa té aqui.
        case '-':
        printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
        break;
        case '*':
        printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
        break;
        case '/':
        printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
        break;
        default:
        printf("Voce digitou uma operacao invalida.");
    }
}