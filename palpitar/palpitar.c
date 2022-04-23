#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {

  srand(time(NULL));

  int num = rand() %101;
  int palpite;
  int tentativas = 0;

  do
  {
    printf("Tente advinhar o Número:\t");
    scanf("%i", &palpite);
    getchar();

    tentativas ++;

    if(palpite > num)
    {
      printf("O número é menor, tente de novo\n");
    }

    else if(palpite < num)
    {
      printf("O númeor é maior, tente de novo\n");
    }

    else
    {
      printf("Você Acertou!\n");
    }

  } while (palpite != num);

  printf("\nVc acertou, o número é %i", num);
  printf("\nVc precisou de %i tentativas", tentativas);



  return 0;
}