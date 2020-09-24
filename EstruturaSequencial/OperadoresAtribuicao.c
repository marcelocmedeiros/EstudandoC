/*
    Operador	    Descrição	                        Exemplo
        =	    Operador de atribuição  	            C = A + B atribuirá o valor de A + B a C
        +=	    Soma ao operador de atribuição.         C += A é equivalente a C = C + A
        -=	    Subtrair ao operador de atribuição.     C -= A é equivalente a C = C - A
        *=	    Multiplique ao operador de atribuição.  C *= A é equivalente a C = C * A
        /=	    Divida ao operador de atribuição    	C /= A é equivalente a C = C / A
        %=	    Modulo ao operador de atribuição.       C %= A é equivalente a C = C % A

*/

#include <stdio.h>

int main(void)
{
    int A = 11, C = 2;

    printf("O valor de A = %d, B = %d e C = %d\n", A, B, C);
    printf("Operador de atribuição '=' C = A, ou seja, C = %d\n", A);
    printf("Operador de atribuição '+=' C += A, ou seja, C = %d\n", C + A);
    printf("Operador de atribuição '-=' C -= A, ou seja, C = %d\n", C - A);
    printf("Operador de atribuição '*=' C *= A, ou seja, C = %d\n", C * A);
    printf("Operador de atribuição '/=' A /= C, ou seja, A = %d\n", A / C);
     printf("Operador de atribuição '\%=' A \%= C, ou seja, A = %d\n", A % C);
    return 0;
}
