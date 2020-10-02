#include <stdio.h>

int main(void) {

    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Par");
    }
    else
    {
        printf("Impar");
    }
    
    return 0;
}