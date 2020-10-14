#include <stdio.h>

int main(void) {

    int num;
    printf("Informe um numero natural positivo: ");
    scanf("%d", &num);
    while (num <= 0)
    {
        printf("Informe um numero natural positivo: ");
        scanf("%d", &num);
    }
    
    for (int i = num; i >= 0; i--)
    {
        printf("%d-> ", i);
    }
    
    return 0;
}