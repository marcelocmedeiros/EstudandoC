#include <stdio.h>

int main(void) {

    int impar;

    printf("Informe um numero inteiro impar: ");
    scanf("%d", &impar);
    while (impar % 2 == 0 || impar == 0)
    {
        printf("Informe um numero inteiro impar: ");
        scanf("%d", &impar);
       
    }
    for (int i = impar; i >= 1; i-=2)
    {
        printf("%d-> ", i);
    }

    return 0;
}