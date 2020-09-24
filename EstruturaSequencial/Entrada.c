/**
 * O formato pode ser uma simples sequência constante, mas você pode especificar %s, %d, %c, %f, etc., para imprimir ou ler strings, inteiro, caractere ou flutuar, respectivamente.
 *      %s -> strings
 *      %d -> inteiro
 *      %c -> caractere
 *      %f -> real
 *      %.2(3,4,5..)f -> ponto + digito de quantas casa depois do ponto quer se ver.
 * No scanf -> quando o valor for inteiro deve-se acrescentar & antes da variável
*/
#include <stdio.h>

int main( ) {

   char str[100];
   int i;

   printf( "Entre com 0 valor: ");
   scanf("%s %d", str, &i);

   printf( "\nYou entered: %s %d ", str, i);

   return 0;
}