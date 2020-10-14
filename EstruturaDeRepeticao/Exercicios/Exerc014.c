#include <stdio.h>

int main(void) {

    int par;

    printf("Informe um numero inteiro par: ");
    scanf("%d", &par);
    while (par % 2 == 1 || par == 0)
    {
        printf("Informe um numero inteiro par: ");
        scanf("%d", &par);
       
    }
    for (int i = par; i >= 2; i-=2)
    {        
        printf("%d-> ", i);  
    }

    return 0;
}