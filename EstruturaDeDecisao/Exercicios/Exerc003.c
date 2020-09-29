#include <stdio.h>

int main(void ) {

    char letra;
    printf("Informe o sexo F - Feminino ou M - Masculino: ");
    scanf("%s", &letra);
    /*
    // com if else aninhados
    if (letra == 'f' || letra == 'F')
    {
        printf("Sexo Feminino.");
    }
    else
    {
        if (letra == 'm' || letra == 'M')
        {
            printf("Sexo Masculino.");
        }
        else
        {
            printf("Sexo invalido...");
        }        
    }*/
    // com switch
    switch (letra)
    {
    case 'f': case 'F':
        printf("Sexo Feminino.");
        break;
    case 'm': case 'M':
        printf("Sexo masculino.");
        break;
    
    default:
        printf("Sexo invalido...");
        break;
    }
    
    return 0;
}