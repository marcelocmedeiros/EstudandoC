#include<stdio.h>

int main() {

    int num, u, d, c;
    printf("Informe um numero inteiro menor que 1000: ");
    scanf("%d", &num);
    if (num > 0  && num < 1000)
    {
        u = num / 1 % 10;
        d = num / 10 % 10;
        c = num / 100 % 10;
        printf("%d = %d centenas, %d dezenas e %d unidades", num, c, d, u);
    }
    else
    {
        printf("Insira um numero maior que zero 0 ou menor que 1000");
    }
    
    return 0;
}