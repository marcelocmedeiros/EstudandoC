
#include <stdio.h>

int main(void)
{
    int lado, dobro;
    

    printf("Informe o lado do quadrado: ");
    scanf("%d", &lado);

    dobro = 2*(lado*lado);

    printf("O dobro da area do quadrado eh %d", dobro);

    return 0;
}