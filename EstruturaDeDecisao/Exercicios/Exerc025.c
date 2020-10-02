#include <stdio.h>

int main() {

    int resp1, resp2,resp3, resp4, resp5, soma;

    printf("Houve um assassinato e precisso fazer algumas peguntas\nBasta responder (0 para NAO - 1 para SIM).\n");

    printf("Telefonou para a vitima? ");
    scanf("%d", &resp1);

    printf("Esteve no local do crime? ");
    scanf("%d", &resp2);

    printf("Mora perto da vitima? ");
    scanf("%d", &resp3);

    printf("Devia para a vitima? ");
    scanf("%d", &resp4);

    printf("Ja trabalhou com a vitima? ");
    scanf("%d", &resp5);

    soma = resp1 + resp2 + resp3 + resp4 + resp5;

    if (soma == 5)
    {
        printf("Eh o Assassino");
    }
    else if (soma == 4 || soma == 3)
    {
        printf("Eh Cumplice");
    }
    else if (soma == 2)
    {
        printf("Eh Suspeito");
    }
    else
    {
        printf("Eh Inocente");
    }
    
    return 0;
}