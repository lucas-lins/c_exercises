#include <stdio.h>
int main()
{
  float f;
  char c;
  
do {
  printf("Qual a temperatura em Farenheit? ");
  scanf("%f", &f);
  printf("A temperatura em Célsius seria: %f", (f-32)*5/9);
  printf("\n\nDeseja outra operacao? Press q to quit\n\n", (f-32)*5/9);
  scanf("%c", &c);

  } while(c != 'q');

  return 0;
}