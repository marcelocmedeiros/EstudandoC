/**
 * 
 Tipo	        Tamanho de armazenamento	Faixa de valor	            Precisão
 float	        4 byte	                    1.2E-38 to 3.4E+38	        6 decimal places
double	        8 byte	                    2.3E-308 to 1.7E+308	    15 decimal places
long double	    10 byte	                    3.4E-4932 to 1.1E+4932	    19 decimal places
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {

    printf("Storage size for float : %d \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG );

    return 0;
}