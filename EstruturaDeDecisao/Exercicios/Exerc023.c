#include <stdio.h>

int main(void) {

    float num;
    int auxiliar;
    printf("Informe um numero: ");
    scanf("%f", &num);
    auxiliar = num;

    if (auxiliar == num)
    {
        printf("O numeor eh inteiro");
    }
    else
    {
        printf("O numeor eh decimal");
    }
    
    return 0;
}