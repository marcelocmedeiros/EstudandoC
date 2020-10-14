#include <stdio.h>

int main(void) {

    int num, cont = 0, par = 0;
    do
    {
        printf("Informe um numero para finalizar digite 1000: ");
        scanf("%d", &num);
        cont ++;
        if (num % 2 == 0)
        {
            par ++;
        }
        
    } while (num != 1000);
    
    printf("Quantidade de numero lidos foi %d\n", cont -1);
    printf("Quantidade de numero pares foi %d\n", par - 1);
    return 0;
}