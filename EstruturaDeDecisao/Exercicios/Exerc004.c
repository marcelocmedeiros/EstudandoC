#include <stdio.h>

int main(void) {

    char letra;
    printf("Informe uma letra: ");
    scanf("%c", &letra);
    switch (letra)
    {
    case 'a': case 'A': case 'e':case 'E':case 'i':case 'I':case 'o':case 'O':case 'u':case 'U':
        printf("A letra '%c' informada eh vogal", letra);
        break;
    
    default:
        printf("A letra '%c' informada eh consoante", letra);
        break;
    }

    return 0;
}