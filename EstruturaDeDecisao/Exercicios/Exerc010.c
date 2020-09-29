#include <stdio.h>

int main(void) {

    char letra;
    printf("Que turno voce estuda.\nDigite M-matutino ou V-Vespertino ou N- Noturno: ");
    scanf("%c", &letra);

    switch (letra)
    {
    case 'M': case 'm':
        printf("Matutino.");
        break;
    case 'V': case 'v':
        printf("Vespertino.");
        break;
    case 'N': case 'n':
        printf("Noturno.");
        break;
    default:
        printf("Valor Invalido!");
        break;
    }
    return 0;
}