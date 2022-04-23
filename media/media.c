#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  srand(time(NULL));

  int num, contador, denom = 0;
  float resultado = 0;

  for(contador = 0; contador <10; contador++)
  {
    printf("Digite um Número:\t");
    scanf("%i", &num);
    
    if(num >= 0)
    {
      resultado = resultado + num;
      denom = denom + 1;
    }

    else
    {
      resultado = resultado;
    }

  }

  printf("\nResultado = %.2f", resultado/denom);
  printf("\nDenom = %i", denom);
  printf("\nContador = %i", contador);
   
  return 0;
}