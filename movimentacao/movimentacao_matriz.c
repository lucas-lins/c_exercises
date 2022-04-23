#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(void) {

    srand(time(NULL));

    char matriz [10][10];
    int coluna = 0;
    int linha = 0;
    int alea1 = rand() % 11;
    int alea2 = rand() % 11;

    char move;


        for(linha = 0; linha < 5; linha++)    //Gerar mapa formado por '*'
        {
            for(coluna = 0; coluna < 10; coluna++)
            {
                matriz[linha][coluna] = '-';
            }
        }

        matriz[alea1][alea2] = 'C';     //atribui a um ponto aleatório da matriz o char 'c'

        do
        {
            system("cls");

            for(linha =  0; linha < 10; linha ++)   //Imprime a matriz
            {
                for(coluna = 0; coluna < 10; coluna++)
                {
                    printf("%c  ", matriz[linha][coluna]);
                }

                printf("\n");
            }

            printf("\nUse w, a, s, d para movimentar o personagem");


            move = getch();

            switch(move) {

            case 'w':
                if(alea1 == 0)
                {

                }

                else
                {
                    matriz[alea1 - 1][alea2] = 'C';
                    matriz[alea1][alea2] = '-';
                    alea1 = alea1 - 1;
                }
                break;

            case 'a':
                if (alea2 ==0)
                {

                }
                else
                {
                    matriz[alea1][alea2 - 1] = 'C';
                    matriz[alea1][alea2] = '-';
                    alea2 = alea2 - 1;
                }
                break;

            case 's':
                if (alea1 == 9)
                {

                }
                else
                {
                    matriz[alea1 + 1][alea2] = 'C';
                    matriz[alea1][alea2] = '-';
                    alea1 = alea1 + 1;
                }
                break;

            case 'd':
                if(alea2 == 9)
                {

                }

                else
                {
                    matriz[alea1][alea2 + 1] = 'C';
                    matriz[alea1][alea2] = '-';
                    alea2 = alea2 + 1;
                }
                break;

            default:
                break;

            }

        } while (move != 'q');


return 0;
}
