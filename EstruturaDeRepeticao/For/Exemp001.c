/**
 * É utilizado quando se conhece quantas repetições deseja fazer
 * O formato do laço for é:
     int i; -> declaração do tipo

    for (i = 0; i <= 10; i += 1) -> i = 0 == início do laço | i <= 10 teste da expresão | i += 1 incremento da variável
    {
        .... 
        ....  -> corpo da repetição
    } 

 * A inicialização é executada uma única vez no início do laço.
 * A expressão teste é então avaliada para verificar se o laço deve terminar.
 * Caso a expressão seja verdadeira (isto é, diferente de Zero), o corpo da repetição é executado. 
 * Depois desta execução, a expressão de incremento é executada e o processo é repetido a partir da expressão teste.
 * O corpo da repetição, por sua vez, pode ser uma sentença simples ou composta.
*/

#include <stdio.h>

int main( void ){
  
  int contador, total;
  
  for( contador = 0, total = 0; contador < 10; contador += 1 ) {
    total += contador;
    printf( "contador = %d, total = %d\n", contador, total );
  }
  return 0;
}