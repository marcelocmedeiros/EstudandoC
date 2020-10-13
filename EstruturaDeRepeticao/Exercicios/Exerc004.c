#include <stdio.h>

int main(void) {

    for (int i = 0; i <= 100000; i+= 1000)
    {
        printf("%d, ", i);
    }
    
    return 0;
}