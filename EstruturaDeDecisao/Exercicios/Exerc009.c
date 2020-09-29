#include <stdio.h>

int main(void) {

    int num1, num2, num3;
    printf("Informe 3 numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
    {        
        if (num2 > num3)
        {
            printf("%d, %d e %d", num1, num2, num3);
        }
        else
        {
            printf("%d, %d e %d", num1, num3, num2);
        }                    
    }
    else
    {
        if (num2 > num1 && num2 > num3)
        {            
            if (num1 > num3)
            {
                printf("%d, %d e %d", num2, num1, num3);
            }
            else
            {
                printf("%d, %d e %d", num2, num3, num1);
            }      
        }
        else
        {            
            if (num2 > num1)
            {
                printf("%d, %d e %d", num3, num2, num1);
            }
            else
            {
                printf("%d, %d e %d", num3, num1, num2);
            }      
        }
        
    }
    return 0;
}