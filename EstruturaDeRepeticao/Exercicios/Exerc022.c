#include <stdio.h>

int main(void) {

    int cont = 0;
    float nota, soma = 0;
    printf("Informe a nota: ");
    scanf("%f", &nota);
    while (nota>= 10 && nota <= 20)
    {
        soma = soma + nota;
        cont ++;
        printf("Informe a nota: ");
        scanf("%f", &nota);
    }
       
    printf("Media da notas foram: %.2f\n", soma/cont);
    
    return 0;
}