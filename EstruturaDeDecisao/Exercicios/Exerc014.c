#include <stdio.h>

int main(void) {

    float nota1, nota2, media;
    printf("Informe as duas notas");
    scanf("%f %f", &nota1, &nota2);
    media = (nota1 + nota2)/2;

    printf("Media de Aproveitamento\t\tConceito\n");

    if (media >= 9 && media <= 10)
    {
        printf("Entre 9.0 e 10.0\t\tA\n");
        printf("APROVADO");
    }
    else if (media >= 7.5 && media < 9)
    {
        printf("Entre 7.5 e 9.0\t\t\tB\n");
        printf("APROVADO");
    }
    else if (media >= 6 && media < 7.5)
    {
        printf("Entre 6.0 e 7.5\t\tC\n");
        printf("APROVADO");
    }
    else if (media >= 4 && media < 6)
    {
        printf("Entre 4.0 e 6.0\t\tD\n");
        printf("REPROVADO");
    }
    else
    {
        printf("Entre 4.0 e zero\t\tE\n");
        printf("REPROVADO");
    }
    
    return 0;
}