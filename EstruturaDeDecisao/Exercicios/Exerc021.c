#include <stdio.h>

int main(void) {

    int saque, notas_cem, notas_cinquenta, notas_dez, notas_cinco, notas_um;

    printf("Nesse caixa so pode ser sacado valores entre R$ 10 e R$ 600\nQuanto voce quer sacar?:R$ ");
    scanf("%d", &saque);

    if (10 <= saque <= 600)
    {
        notas_cem = saque / 100;
        saque = saque % 100;

        notas_cinquenta = saque / 50;
        saque = saque % 50;

        notas_dez = saque / 10;
        saque = saque % 10;

        notas_cinco = saque / 5;
        saque = saque % 5;

        notas_um = saque / 1;

        if (notas_cem > 0)
            printf("%d notas de R$ 100\n", notas_cem);
        if (notas_cinquenta > 0)
            printf("%d notas de R$ 50\n", notas_cinquenta);
        if (notas_dez > 0)
            printf("%d notas de R$ 10\n", notas_dez);
        if (notas_cinco > 0)
            printf("%d notas de R$ 5\n",notas_cinco);
        if (notas_um > 0)
            printf("%d notas de R$ 1\n", notas_um);
}              
    else
        {
        printf("Nao eh possivel fazer o saque");
        }

    return 0;
}