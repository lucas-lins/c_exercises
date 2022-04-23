#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {

  srand(time(NULL));

  //Variáveis relacionadas à matriz
  char matriz[7][10];
  char vetor[28]; //Todas posições que os jogadores precisam percorrer
  int linha = 0;
  int coluna = 0;

  //Variáveis dos 4 dados utilizados;
  int dado1_jog1;
  int dado2_jog1;
  int dado1_jog2;
  int dado2_jog2;

  //Variáveis que definem caractere ao jogador
  char jog1 = '1';
  char jog2 = '2';

  //Variáveis relacionadas à vida
  int vidajog1 = 10;
  int vidajog2 = 10;

  //Dado usado durante o jogo
  int dado = 1 + rand() % 6;

  int posi_jog1 = 0; //Armazena sua posição no vetor[]
  int posi_jog1_linha = 0; //Linha na matriz[][]
  int posi_jog1_coluna = 0; //Coluna na matriz[][]


  int posi_jog2 = 0; //Armazena sua posição no vetor[]
  int posi_jog2_linha = 0; //Linha na matriz[][]
  int posi_jog2_coluna = 0; //Coluna na matriz[][]

  char jogador_da_vez;

  //Introdução do jogo e definição de ordem
  do
  {
    dado1_jog1 = 1 + rand() % 6;
    dado2_jog1 = 1 + rand() % 6;
    dado1_jog2 = 1 + rand() % 6;
    dado2_jog2 = 1 + rand() % 6;

    system("cls");
    printf("\t\tBEM VINDO AO MAZE RUNNER\n");
    printf("\nPrimeiro, veremos quem começará jogando");
    getchar();
    system("cls");

    printf("\nJogador 1, jogue seus dados: ");
    getchar();
    printf("\nDado 1 = %i, Dado 2 = %i", dado1_jog1, dado2_jog1);
    printf("\nTotal Jogador 1 = %i", dado1_jog1 + dado2_jog1);
    getchar();
    system("cls");

    printf("\n\nJogador 2, jogue seus dados:");
    getchar();
    printf("\nDado 1 = %i, Dado 2 = %i", dado1_jog2, dado2_jog2);
    printf("\nTotal Jogador 2 = %i", dado1_jog2 + dado2_jog2);
    getchar();
    system("cls");

    if (dado1_jog1 + dado2_jog1 > dado1_jog2 + dado2_jog2)
    {
      printf("O jogador 1 começará jogando\n");
      jogador_da_vez = jog1;
    }

    else if (dado1_jog1 + dado2_jog1 < dado1_jog2 + dado2_jog2)
    {
      printf("O jogador 2 começará jogando\n");
      jogador_da_vez = jog2;
    }

  } while (dado1_jog1 + dado2_jog1 == dado1_jog2 + dado2_jog2);

  getchar();
  system("cls");

  //Gerar matriz

  for (linha = 0; linha < 7; linha++)
  {
    for (coluna = 0; coluna < 10; coluna++)
    {
      matriz[linha][coluna] = ' ';
    }
  }

  for (coluna = 0; coluna < 10; coluna++)
  {
    matriz[0][coluna] = 'W';
    matriz[6][coluna] = 'W';
  }

  for (linha = 0; linha < 7; linha++)
  {
    matriz[linha][9] = 'W';
    matriz[linha][0] = 'F';
  }

  matriz[0][0] = '>';
  matriz[1][0] = ' ';
  matriz[2][0] = ' ';

  matriz[0][2] = 'R';
  matriz[0][3] = 'G';
  matriz[0][5] = 'B';
  matriz[0][7] = 'Y';
  matriz[0][9] = 'R';
  matriz[1][9] = 'G';
  matriz[2][9] = 'K';
  matriz[3][9] = 'B';
  matriz[6][9] = 'R';
  matriz[6][8] = 'G';
  matriz[6][6] = 'Y';
  matriz[6][4] = 'R';
  matriz[6][3] = 'G';
  matriz[6][1] = 'B';
  matriz[6][0] = 'R';
  matriz[5][0] = 'Y';
  matriz[4][0] = 'G';
  
  matriz[2][3] = 'M';
  matriz[2][4] = 'A';
  matriz[2][5] = 'Z';
  matriz[2][6] = 'E';
  matriz[4][2] = 'R';
  matriz[4][3] = 'U';
  matriz[4][4] = 'N';
  matriz[4][5] = 'N';
  matriz[4][6] = 'E';
  matriz[4][7] = 'R';


  do
  {
    getchar();
    system("cls");

    printf("> = Início\n");
    printf("F = Linha de Chegada\n");
    printf("W = Casa branca: Nada te acontece\n");
    printf("R = Casa vermelha: Você perde 3 pts de Vida\n");
    printf("G = Casa verde: Você ganha 1 pto de vida\n");
    printf("Y = Casa amarela: Você perde um turno\n");
    printf("B = Casa azul: Você pode jogar novamente\n");
    printf("K = Casa preta: Você volta ao Início\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

    //imprime a matriz
    for (linha = 0; linha < 7; linha++)
    {
      for (coluna = 0; coluna < 10 ; coluna++)
      {
        printf("%c\t", matriz[linha][coluna]);
      }

      printf("\n\n");
    }


    dado = 1 + rand() % 6; // sorteando dado a ser jogado

    if (jogador_da_vez == jog1)
    {
      printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
      printf("-> Vez do Jogador 1, sua posição: casa %d\n", posi_jog1 + 1);
      printf("-> Jogue seu dado");
      getchar();
      printf("-> Você tirou %i no dado\n", dado);

      posi_jog1 += dado;
      posi_jog1 = (posi_jog1 > 27) ? 27 : posi_jog1;

      if (posi_jog1  <= 9) {
        posi_jog1_linha = 0;
        posi_jog1_coluna = posi_jog1;
      }
      else if (posi_jog1 <= 15) {
        posi_jog1_linha = posi_jog1 % 9;
        posi_jog1_coluna = 9;
      }
      else if (posi_jog1 <= 24) {
        posi_jog1_linha = 6;
        posi_jog1_coluna = 24 - posi_jog1;
      }
      else if (posi_jog1 <= 27) {
        posi_jog1_linha = 30 - posi_jog1;
        posi_jog1_coluna = 0;
      }
      else {
        printf("ALGO DEU ERRADO MARRECO!\n");
      }

      printf("Nova posição: casa %d\n", posi_jog1 + 1);

      //Switch Cores das Casas
      switch (matriz[posi_jog1_linha][posi_jog1_coluna])
      {
      case 'W':
        printf("Casa vazia, nada te aconteceu!");
        break;

      case 'R':
        vidajog1 = vidajog1 - 3;
        //Apesar da posição não ser atualizada, a vida está sendo!
        printf("Voce perdeu três pontos de vida!\n");
        printf("Vida atual = %i", vidajog1);
        break;

      case 'G':
        if (vidajog1 == 10)  {
          printf("Voce ja tem 10 vidas");
        }
        else
        {
          vidajog1 = vidajog1 + 1;
          printf("você ganhou um ponto de vida!\n");
          printf("Vida atual = %i", vidajog1);
        }
        break;

      case 'Y':
        jogador_da_vez = jog2;
        printf("Você perdeu um turno!");
        continue;
        break;

      case 'B':
        printf("Você ganhou mais um turno!");
        continue;
        break;

      case 'K':
        if (posi_jog1_linha != 3 && posi_jog1_coluna != 0) {
          posi_jog1_linha = 0;
          posi_jog1_coluna = 0;
          posi_jog1 = 0;
          printf("Você voltou ao início!\n");
          printf("Nova casa: %i\n", posi_jog1 + 1);
        }
        break;

      default:
        printf("Fim de jogo");
        break;
      }

    }
    else
    {
      printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
      printf("-> Vez do Jogador 2, sua posição: casa %d\n", posi_jog2 + 1);
      printf("-> Jogue seu dado");
      getchar();
      printf("-> Você tirou %i no dado\n", dado);

      posi_jog2 += dado;
      posi_jog2 = (posi_jog2 > 27) ? 27 : posi_jog2;

      if (posi_jog2  <= 9) {
        posi_jog2_linha = 0;
        posi_jog2_coluna = posi_jog2;
      }
      else if (posi_jog2 <= 15) {
        posi_jog2_linha = posi_jog2 % 9;
        posi_jog2_coluna = 9;
      }
      else if (posi_jog2 <= 24) {
        posi_jog2_linha = 6;
        posi_jog2_coluna = 24 - posi_jog2;
      }
      else if (posi_jog2 <= 27) {
        posi_jog2_linha = 30 - posi_jog2;
        posi_jog2_coluna = 0;
      }
      else {
        printf("ALGO DEU ERRADO MARRECO!\n");
      }

      printf("Nova posição: casa %d\n", posi_jog2 + 1);

      //Switch Cores das Casas
      switch (matriz[posi_jog2_linha][posi_jog2_coluna])
      {
      case 'W':
        printf("Casa vazia, nada te aconteceu!");
        break;

      case 'R':
        vidajog2 = vidajog2 - 3;
        //Apesar da posição não ser atualizada, a vida está sendo!
        printf("Voce perdeu três pontos de vida!\n");
        printf("Vida atual = %i", vidajog2);
        break;

      case 'G':
        if (vidajog2 == 10)  {
          printf("Voce ja tem 10 vidas");
        }
        else
        {
          vidajog2 = vidajog2 + 1;
          printf("você ganhou um ponto de vida!\n");
          printf("Vida atual = %i", vidajog2);
        }
        break;

      case 'Y':
        jogador_da_vez = jog1;
        printf("Você perdeu um turno!");
        continue;
        break;

      case 'B':
        printf("Você ganhou mais um turno!");
        continue;
        break;

      case 'K':
        if (posi_jog2_linha != 3 && posi_jog2_coluna != 0) {
          posi_jog2_linha = 0;
          posi_jog2_coluna = 0;
          posi_jog2 = 0;
          printf("Você voltou ao início!\n");
          printf("Nova casa: %i\n", posi_jog2 + 1);
        }
        break;

      default:
        printf("Fim de Jogo");
        break;
      }

    }

    //Sistema de vida
    if (vidajog1 <= 0)
    {
      getchar();
      system("cls");
      printf("Parabéns Jogador 1! Você venceu!\n");
      
      getchar();
      system("cls");

      printf("Equipe IP - Garotos de Programa\n");
      printf("- Eduado Amorim\n- Gabriel André\n");
      printf("- JP Freire\n- JP Oliveira");
      printf("- Lucas Lins\n- Moesio Filho\n");

      getchar();
      system("cls");
      printf("Participações especiais:\n- Onça Hunter\n- Marreco");
      return 0;
    }

    else if (vidajog2 <= 0)
    {
      getchar();
      system("cls");
      printf("Parabéns Jogador 1! Você venceu!\n");

      getchar();
      system("cls");

      printf("Equipe IP - Garotos de Programa\n");
      printf("- Eduado Amorim\n- Gabriel André\n");
      printf("- JP Freire\n- JP Oliveira");
      printf("- Lucas Lins\n- Moesio Filho\n");

      getchar();
      system("cls");
      printf("Participações especiais:\n- Onça Hunter\n- Marreco");
      return 0;
    }
    
    //Implementação Vez do jogador
    if (jogador_da_vez == jog1) {
      jogador_da_vez = jog2;
    }
    else {
      jogador_da_vez = jog1;
    }

  } while (posi_jog1 != 27 && posi_jog2 != 27);

  getchar();
  system("cls");

  if(posi_jog1 == 27)
  {
    printf("Parabéns Jogador 1! Você venceu!\n");
  }

  else
  {
    printf("Parabéns Jogador 2! Você venceu!\n");
  }

  getchar();
  system("cls");

  printf("Equipe IP - Garotos de Programa\n");
  printf("- Eduado Amorim\n- Gabriel André\n");
  printf("- JP Freire\n- JP Oliveira\n");
  printf("- Lucas Lins\n- Moesio Filho\n");

  getchar();
  system("cls");
  printf("Participações especiais:\n- Onça Hunter\n- Marreco");


  return 0;
}