#include <stdio.h>

int main(void) {

    int dia, mes, ano;
    printf("Informe a  data no formato dd/mm/aaaa: ");
    scanf("%d %d %d",&dia, &mes, &ano);

    if (ano >= 0)
    {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes ==12)
        {
            if (dia <= 31)
            {
                printf("Data valida %d/%d/%d", dia, mes, ano);
            }
            else
            {
                printf("Data invalida!");
            }             
        }
        else if (mes == 2)
        {
            if (dia <= 29)
                {
                    printf("Data valida %d/%d/%d", dia, mes, ano);
                }
            else
            {
                printf("Data invalida!");
            }
        }
        else
        {
            printf("Data valida %d/%d/%d", dia, mes, ano);
        }
    }
    else
    {
        printf("Data invalida!");
    }
    
    return 0;
}