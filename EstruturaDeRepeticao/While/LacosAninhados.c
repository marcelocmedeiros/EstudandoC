

#include <stdio.h>

int main( ){
  
  int linha, coluna;
  
  linha = 1; 
  while (linha < 5)
  {
    coluna = 1; 
    while (coluna < 5)
    {
      printf( "%3d", linha * coluna );
      coluna += 1;
    }
    printf( "\n" ); // deixa no forma de matriz
    linha += 1;    
  }
  
}