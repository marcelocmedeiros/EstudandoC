/**
 * 
 * Converter um tipo de datatip em outro é conhecido como fundição de tipo(type casting) ou conversão de tipo
 * Explicando o uso de cast operator
 * As conversões aritméticas usuais são implicitamente realizadas O compilador realiza pela primeira vez a promoção de inteiros; se os operandos ainda têm tipos diferentes, então eles são convertidos para o tipo que aparece mais alto na hierarquia a seguir: int -> float -> double
 * Não pode converter do maior para o menor.
 */

#include <stdio.h>

int main(void) {

   int sum = 17, count = 5;
   double mean;

   mean = (double) sum / count;
   printf("Value of mean : %f\n", mean );
}

