#include <stdio.h>

int main() {
    int num;

    printf("informe um numero: ");
    scanf("%d",&num);
    printf("Os numeros impares ate %d eh\n", num);
    for (int i = 1; i <= num; i+=2)
        {        
        printf("%d, ", i);
        }        
       
    return 0;
}