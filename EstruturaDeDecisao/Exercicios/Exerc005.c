#include <stdio.h>

int main(void) {

    float nota1, nota2, media;
    printf("Informe as duas notas: ");
    scanf("%f %f", &nota1, &nota2);
    media = (nota1 + nota2)/2;
    if (media == 10)
    {
        printf("Aprovado com Distincao a media foi %.2f", media);
    }
    else
    {
        if (media > 7)
        {
            printf("Aprovado a media foi %.2f", media);
        }
        else
        {
            printf("Reprovado a media foi %.2f", media);
        }
        
    }    

    return 0;
}