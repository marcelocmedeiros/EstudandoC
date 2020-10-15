#include <stdio.h>

int main(void) {

    int num;
    printf("Informe uma numero inteiro positivo: \n>");
    scanf("%d", &num);
    while (num <=0 )
    {
        printf("Informe uma numero inteiro positivo: \n>");
        scanf("%d", &num);
    }
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d-> ", i);
        }      
    }  
    
    return 0;
}