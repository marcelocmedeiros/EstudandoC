#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("Informe dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        printf("O numero %d eh o maior", num1);
    }else
    {
        printf("O numero %d eh 0 maior", num2);
    }
    
    return 0;
}
