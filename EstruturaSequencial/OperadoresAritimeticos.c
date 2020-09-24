/*  variável A detém 10 e a variável B contém 20 

Operador	    Descrição	                Exemplo
    +	           Soma 	                A + B = 30
    −	         Subtrai    	            A − B = -10
    *	        Multiplica 	                A * B = 200
    /	          Divide                  	B / A = 2
    %	     Modulo ou resto da Divisão	    B % A = 0
    ++	    incremento aumenta um.	        A++ = 11
    --	    decremento diminui um.	        A-- = 9

*/

#include <stdio.h>
int main()
{
    float num1, num2, soma, sub, mult, div, mod;
    printf("Digite o primeiro numero: " );
    scanf("%f", &num1);
    printf("Digite o segundo numero: " );
    scanf("%f", &num2);
    //Soma
    soma = num1 + num2;
    //Subtração
    sub = num1 - num2;
    //Multiplicaçao
    mult = num1 * num2;
    //Divisão
    div = num1/num2;
    //modulo
    mod = (int)num1 % (int)3;

    printf("%.2f + %.2f = %.2f\n", num1, num2, soma); 
    printf("%.2f - %.2f = %.2f\n", num1, num2, sub); 
    printf("%.2f * %.2f = %.2f\n", num1, num2, mult); 
    printf("%.2f / %.2f = %.2f\n", num1, num2, div);
    printf("%.2f modulo 3 = %.2f\n", num1, mod);
    printf("%.2f incremento++ = %.2f\n", num1, ++num1);
    printf("%.2f decremento-- = %.2f\n", num2, --num2);
}