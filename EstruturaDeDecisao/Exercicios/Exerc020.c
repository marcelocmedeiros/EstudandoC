#include <stdio.h>

int main(void) {

    float nota1, nota2, nota3, media;

    printf("Informe as 3 notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    media = (nota1+nota2+nota3)/3;

    if (media >= 7)
    {
        if (media == 10)
        {
            printf("Aprovado com Distincao sua media foi %.2f", media);
        }
        else
        {
            printf("Aprovado sua media foi %.2f", media);
        }
        
    }
    else
    {
        printf("Reprovado sua media foi %.2f", media);
    }

    return 0;
}