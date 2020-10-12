/**
 * O do...while é bastante parecido com while, com a diferença que a expressão de teste é avaliada DEPOIS que o corpo da repetição é executado.
 * O formato do do...while é:
    do

    corpo da repetição

    while (expressão teste)

*/
#include <stdio.h>

int main(void) {
    
    int num;
  
    printf( "Entre com um numero par:\n" );
    
    do{
        scanf( "%d", &num );
    } while( num % 2 != 0 );
    
    printf( "Obrigado.\n" );
    return 0;
}