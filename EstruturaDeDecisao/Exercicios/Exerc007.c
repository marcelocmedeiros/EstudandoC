#include <stdio.h>

int main(void) {

    int num1, num2, num3, maior, menor;
    printf("Informe 3 numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("Maior eh %d\n", num1);
        if (num2 > num3)
        {
            printf("Menor eh %d\n", num3);
        }
        else
        {
            printf("Menor eh %d\n", num2);
        }                    
    }
    else
    {
        if (num2 > num1 && num2 > num3)
        {
            printf("Maior eh %d\n", num2);
            if (num1 > num3)
            {
                printf("Menor eh %d\n", num3);
            }
            else
            {
                printf("Menor eh %d\n", num1);
            }      
        }
        else
        {
            printf("Maior eh %d\n", num3);
            if (num2 > num1)
            {
                printf("Menor eh %d\n", num1);
            }
            else
            {
                printf("Menor eh %d\n", num2);
            }      
        }
        
    }
    return 0;
}