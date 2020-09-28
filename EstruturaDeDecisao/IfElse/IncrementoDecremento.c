/*
Operadores de Incremento (++) e Decremento (--)
Diferença entre a=b++ e a=++b || a = b-- e a = --b

a = b++; -> aqui primeiro 'a' recebe 'b' e depois ele faz o incremento +1;
a = ++b; -> aqui primeiro soma +1 a 'b' para depois 'a' receber o valor;

a = b--; -> aqui primeiro 'a' recebe 'b' e depois ele faz o decremento -1;
a = --b; -> aqui primeiro subtrai -1 a 'b' para depois 'a' receber o valor;
*/
#include <stdio.h>

int main()
    {   
        int a,
        b=1;
        printf("b = %d\n",b);
        printf("a = b++\n"); 
        a = b++;
        printf("\nAgora: \na = %d\n",a);
        printf("b = %d\n",b);
        
        printf("\na = ++b\n"); 
        a = ++b;
        printf("\nAgora: a = %d",a);
    }