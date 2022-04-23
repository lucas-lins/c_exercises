#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  srand(time(NULL));

  char palavra1[10] = "amor";
  char palavra2[10] = "vida";
  char palavra3[10] = "casa";
  char palavra4[10] = "lava";
  char palavra5[10] = "alma";
  char palavra6[10] = "gato";
  char palavra7[10] = "chuva";
  char palavra8[10] = "chave";
  char palavra9[10] = "curta";
  char palavra10[10] = "couve";

  int alea = 1 + rand() %10;
  char palavra[10];

  switch(alea)
  {
    case 1:
      strcpy(palavra, palavra1);
      break;
    
    case 2:
      strcpy(palavra, palavra2);
      break;
    
    case 3:
      strcpy(palavra, palavra3);
      break;

    case 4:
      strcpy(palavra, palavra4);
      break;

    case 5:
      strcpy(palavra, palavra5);
      break;

    case 6:
      strcpy(palavra, palavra6);
      break;

    case 7:
      strcpy(palavra, palavra7);
      break;
    
    case 8:
      strcpy(palavra, palavra8);
      break;
    
    case 9:
      strcpy(palavra, palavra9);
      break;
    
    case 10:
      strcpy(palavra, palavra10);
      break;

    default: break;
  }

  int tamanho = strlen(palavra);

  char acerto[tamanho];
  
  for(int contador = 0; contador < tamanho; contador++)
  {
    acerto[contador] = '_';
  }

  int letras_acertadas = 0;
  int vida = 5;

  char letra;

  printf("\nBem vindo ao Jogo da forca\n\n");

  do
  {
    for(int contador = 0; contador < tamanho; contador++)
    {
      printf("%c ", acerto[contador]);
    }

    printf("\n\nVocê tem %i vidas.", vida);
    printf("\nEscolha uma letra: ");
    scanf("%c", &letra);
    getchar();

    int acertou = 0;

    for(int contador=0; contador < tamanho; contador++)
    {
      if (letra == palavra[contador])
      {
        acerto[contador] = letra;
        letras_acertadas ++;
        acertou = 1;
      }
    }

    if (acertou == 0)
    {
      vida--;
    }

    system("clear");
    

  } while(letras_acertadas != tamanho && vida > 0);

  if(letras_acertadas == tamanho)
  {
    printf("Parabéns, você venceu!");
  }

  else if(vida == 0)
  {
    printf("Tu morreu abestado");
  }

  return 0;
}