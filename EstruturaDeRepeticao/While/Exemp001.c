/**
 * Mais usado quando não se sabe quantas repetições vai ser utilizadas
 * O comando de repetição while tem duas partes: a expressão de teste e o corpo da repetição. O formato do while é:

        while (expressão teste)

        corpo da repetição
 * A expressão teste é inicialmente avaliada para verificar se o laço deve terminar. 
 * Caso a expressão seja verdadeira (isto é, diferente de 0 (zero)), o corpo da repetição é executado.
 *  Depois desta execução, o processo é repetido a partir da expressão teste. 
 * O corpo do laço, por sua vez, pode ser uma sentença simples ou composta.
 * * Um loop se torna um loop infinito se uma condição nunca se torna falsa.
*/

#include <stdio.h>

int main(void) {
    int contador = 0; // controle do fluxo 

             while( contador < 5 ) // expressão teste
             {
               printf( "contador = %d\n", contador); // corpo da repetição
               contador += 1; // incrementador
             }

             printf("ACABOU !!!!\n");
    return 0;
}

/**
 * Necessidade ou não das chaves
 * As chaves ({ e }) podem ser omitidas quando o corpo da repetição contiver apenar uma sentença
       while( i < 5 )
      i += 1;
*/