#include <stdio.h>


int main () {
    
    int num, i, vezes = 0, digitado, maior = 0;
        
    printf ("Quantos numeros serao digitados? ");
    scanf ("%d", &num);
    
    for (i = 1; i <= num; i++) 
    {
        printf ("\nDigite o %d numero:\n> ", i);
        scanf ("%d", &digitado);
        
        if (digitado >= maior) 
        {
            maior = digitado;
            if (digitado == maior)
            {
                vezes ++;
            }                                                       
        }        
        
        
    }
    printf ("\nO maior numero eh: %d", maior);
    printf ("\nO maior foi lido %d vez(es).", vezes);

    return 0;    
}