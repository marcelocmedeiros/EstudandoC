#include <stdio.h>

int main(void)
{
    int not1, not2, not3, not4;
    float media;

    printf("Informe 4 notas: ");
    scanf("%d %d %d %d", &not1, &not2, &not3, &not4);
    media = (not1 + not2 + not3 + not4)/4;

    printf("A media das 4 notas eh %.2f", media);

    return 0;
}