#include <stdio.h>

int main(void)
{
    float tamanhoBits, tempoSegundos, tempoMinutos, tamanho, velocidade;

    printf("Qual o tamanho do arquivo para download (em MB)\nE qual eh a sua velocidade de um link de Internet(em Mbps)");
    scanf("%f %f", &tamanho, &velocidade);

    tamanhoBits = tamanho * 1024 * 1024 * 8;
    tempoSegundos = tamanhoBits / (velocidade * 1024 * 1024);
    tempoMinutos = tempoSegundos / 60;

    printf("O tempo aproximado de download do arquivo eh %.2fmin", tempoMinutos);

    return 0;
}
