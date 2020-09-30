#include <stdio.h>

int main(void) {

    int ano;
    printf("Informe o ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0 && ano % 100 !=0 || ano % 400 == 0)
    {
        printf("Bissexto!");
    }
    else
    {
        printf("Nao eh Bissexto!");
    }    
    return 0;
}