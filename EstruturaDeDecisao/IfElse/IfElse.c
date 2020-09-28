/**
 * Sintaxe:
   
   if ( condição )
{
    -> se a condição for verdadeira esse código rodará
}
else
{
    -> caso a condição seja FALSA é esse código que rodará
}
*/
#include <stdio.h>

int main(void)
{
    int resultado;
    printf("Quanto eh 1 + 1? "); 
    scanf("%d",&resultado);

    if(resultado == 2)
        {
            printf("Parabens...\n"); // resultado verdadeiro
        }
    else
        {
            printf("Errouuu...\n"); // resultado falso
        }
}