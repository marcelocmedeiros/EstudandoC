#include <stdio.h>

int main(void)
{
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("O numero %d eh positivo.", num);
    }
    else
    {
        if (num < 0)
        {
            printf("O numero %d eh negativo.", num);
        }
        else
        {
            printf("O numero 0 eh elemento neutro.");
        }       
        
    }
    
    return 0;
}
