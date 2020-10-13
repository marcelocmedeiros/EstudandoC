#include <stdio.h>

int main(void) {

    for (int i = 1; i <= 100; i++)
    {
        printf("%d, ", i);
    }
    printf("\n");
    int i = 1;
    while (i <= 100)
    {
        printf("%d, ", i);

        i+=1;
    }
    printf("\n");

    i = 1;
    do
    {
        printf("%d, ", i);

        i+=1;
    } while (i <= 100);
    
    
    
    return 0;
}