#include <stdio.h>

int main(void) {

    int num1, num2, num3, maior;
    printf("Informe 3 numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("Maior eh %d", num1);            
    }
    else
    {
        if (num2 > num1 && num2 > num3)
        {
            printf("Maior eh %d", num2);    
        }
        else
        {
            printf("Maior eh %d", num3);    
        }
        
    }
    
    return 0;
}