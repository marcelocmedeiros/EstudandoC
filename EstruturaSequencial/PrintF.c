/**
 * para exibirmos uma mensagem, basta escrever o texto entre aspas duplas " "
 * Quando queremos que o caractere de aspas duplas apareça no console, colocamos o \ antes: \"
 * C vai interpretar que, com esse símbolo \ antes, o caractere " deve ser exibido na tela.
 * \ -> esse caractere faz é 'avisar' ao C que o próximo caractere, que vem logo após o \ terá um significado diferente.
 * Carriage return: \r -> faz com que o cursor se mova para o início da linha
 * getchar() 
 * */

#include <stdio.h>
int main(void)
{
    printf("Aspas duplas \" \n"); 
    printf("Barra: \\ \n");

    printf("Antes do \\t \t Depois do \\t \n"); // Tabulação horizontal (TAB): \t

    printf("\7 \a"); // emite um som 

    printf("Carriage return: \r");  // faz com que o cursor se mova para o início da linha
    getchar(); // faz com que o programa espere que o usuário digite alguma tecla.

    return 0;
}