#include <stdio.h>

int main(void) {

    int num1, num2, num3;
    printf("Informe o preco de 3 produtos: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 < num2 && num1 < num3)
    {
        printf("Mais barato eh %d\n", num1);                          
    }
    else
    {
        if (num2 < num1 && num2 < num3)
        {
            printf("Mais barato eh %d\n", num2);                
        }
        else
        {
            printf("Mais barato eh %d\n", num3);               
        }
        
    }
    return 0;
}