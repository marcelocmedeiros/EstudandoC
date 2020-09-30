#include <stdio.h>
#include <math.h> // importando essa biblioteca para fazer a raizquadrada da equação

int main(void) {

    int a, b, c, delta, raiz;

    printf("Informe os valores a,b e c da equacao ax2 + bx + c");
    printf("informe o valor de 'a': ");
    scanf("%d", &a);
    if (a != 0)
    {
        printf("informe o valor de 'b' e 'c': ");
        scanf("%d %d", &b, &c);
        delta = (b*b) - (4*a*c);
        if (delta == 0)
        {
            printf("O delta calculado eh igual a zero enta a equacao possui apenas uma raiz real %d", -b/(2*a));
        }
        else if (delta > 0)
        {
            raiz = sqrt(delta);
            printf("Raiz X1 = %d\n", (-b + raiz)/(2*a));
            printf("Raiz X2 = %d\n", (-b - raiz)/(2*a));
        }
        else
        {
            printf("O valor dedelta eh negativo a equacao nao possui raizes reais");
        }
        
    }
    else
    {
        printf("Se 'A' igual a zero nao eh equacao do segundo grau");
    }    
    
    return 0;
}