int main(void) {

    int num, aux, cem, dez, unid;
    
    printf("Informe um numero inteiro  entre 100 e 999: ");
    scanf("%d", &num);
    while (num < 100 || num > 999)
    {
        printf("Informe um numero inteiro  entre 100 e 999: ");
        scanf("%d", &num);
    }
     cem = num / 100;
     aux = num % 100;
     dez = aux / 10;
     unid = aux % 10;
      
    printf("Quantas centena = %d\n", cem);
    printf("Quantas dezenas = %d\n", dez);
    printf("Quantas unidades = %d\n", unid);
    return 0;
}