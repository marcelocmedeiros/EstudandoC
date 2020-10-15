#include <stdio.h>

int main(void) {

    int num1, num2, soma = 0, mult = 1;

    printf("Informe dois numeros nao consecutivos\n");
    printf("Informe o 1 numero:\n>");
    scanf("%d",&num1);
    printf("Informe o 2 numero:\n>");
    scanf("%d",&num2);
    while (num1+1 == num2 || num1-1 == num2 || num1 == num2)
    {
        printf("Informe dois numeros nao consecutivos\n");
        printf("Informe o 1 numero:\n>");
        scanf("%d",&num1);
        printf("Informe o 2 numero:\n>");
        scanf("%d",&num2);
    }
    if (num1 < num2)
    {
        for (int i = num1; i <= num2; i++)
        {
            if (i % 2 == 0)
            {
                soma += i;            
            }
            else
            {
                mult *= i;
            }      
        }
    }
    else if (num2 < num1)
    {
        for (int i = num2; i <= num1; i++)
        {
            if (i % 2 == 0)
            {
                soma += i;            
            }
            else
            {
                mult *= i;
            }      
        }
    }
    
    printf("Soma: %d\n", soma);
    printf("Produto: %d", mult);

    return 0;
}


