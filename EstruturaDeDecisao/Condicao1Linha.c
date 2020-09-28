/*
condição ? se for verdade faça isso : se for falso faça isso;
    SomaX ? x+1 : x-1;
*/
#include <stdio.h>

int main(void)
{
    int x, y = 10;

    x =(y < 10) ? 30 : 40;
    // x vai retorna 40 pq y == 10 sendo assim a expreção é falsa e retorna o segundo valor.
    printf("O valor de x eh %d", x);

    return 0;
}

