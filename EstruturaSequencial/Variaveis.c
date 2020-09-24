/**
 * O nome de uma variável pode ser composto de letras, dígitos e o caráter sublinhado. 
 * Deve começar com uma letra ou um sublinhado. 
 * Letras maiúsculas e minúsculas são distintas porque C é sensível a maiúsculas. 
 * C não permite caracteres de pontuação como @, $e % dentro das variáveis.
 * exemplos de variáveis aceitáveis:
 * 
        mohd       zara    abc   move_name  a_123
        myname50   _temp   j     a23b9      retVal
 *
 * Tipos:
        Char    ->  é um caractere (um byte). É um tipo inteiro.
        int     ->  é número inteiro 
        float   ->  é número real
        double	->  é um número real com dupla precisão
        void    ->  é tipo vazio 
*/

#include <stdio.h>

// Variable declaration:
extern int a, b; // extern para declarar uma variável em qualquer lugar
extern int c;
extern float f;

int main () {

   /* variable definition: */
   int a, b;
   int c;
   float f;
 
   /* actual initialization */
   a = 10;
   b = 20;
  
   c = a + b;
   printf("valor de c : %d \n", c);// %d descreve um valor inteiro

   f = 70.0/3.0;
   printf("valor de f : %f \n", f);// %f descreve um float
 
   return 0;
}
