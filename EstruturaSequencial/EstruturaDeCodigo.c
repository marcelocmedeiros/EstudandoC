
#include <stdio.h>
/**
 * #include chama ou carrega a biblioteca 
 * <stdio.h> é um biblioteca -> O std de 'stdio' é de standard(padrão) e o io é de Input/Output (entrada e saída).
 * */
int main(void) {
   /**
    * int -> inteiro
    * main() -> função principal -> Tudo começa a partir dela -> O código da função fica entre as chaves: {} -> códigos em C sempre devem possuir a função main
    * void -> tipo de retorno    * 
    */
   printf("Hello, World! \n");
   /**
    * função printf() -> faz é imprimir uma mensagem na tela -> Sempre colocar aspas duplas para exibir a string
    * \n: New line, adicionando uma linha em branco || ele imprime uma linha em branco ou pula de linha
    * */
   
   return 0;
   // tipo de retorno no caso int zero(0)
}