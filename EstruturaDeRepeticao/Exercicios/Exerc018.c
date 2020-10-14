#include <stdio.h>


int main () {
    
    int num, i, vezes = 0, digitado, maior = 0;
        
    printf ("Quantos numeros serao digitados? ");
    scanf ("%d", &num);
    
    for (i = 1; i <= num; i++) 
    {
        printf ("\nDigite o %d numero:\n> ", i);
        scanf ("%f", &digitado);
        
        if (digitado >= maior) 
        {
            maior = digitado;                                   
        }
    }
    printf ("\nO maior numero eh: %.2f.", maior);
   //printf ("\nO maior foi lido %d vez(es).", vezes);

    return 0;    
}