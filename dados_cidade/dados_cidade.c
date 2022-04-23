/* 3- A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber: 
a) média do salário da população;
b) média do número de filhos;
c) maior e menor salário;
d) percentual de habitantes com mais de 2 filhos.
A quantidade de habitantes que serão cadastrados é fornecida pelo usuário. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));

  int hab = 1 + rand() %100;
  printf("\nTangamandápio tem %i habitantes", hab);

  float salario, totalsal = 1;
  float filhos, totalfi = 1;
  int contador;
  float porcen, pc = 1;

  int maiorsal =1000, menorsal =10000;

  for (contador = 1; contador <= hab; contador ++)
  {
    filhos = rand() %4;
    salario = 1000 + rand() %10001;

    totalfi = totalfi + filhos;
    totalsal = totalsal + salario;

    if(menorsal > salario)
    {
      menorsal = salario;
    }

    if(maiorsal < salario)
    {
      maiorsal = salario;
    }

    if(filhos >= 2)
    {
      porcen = (pc * 100)/hab;
    }
  }

  printf("\nA média de filhos é %.2f", totalfi/hab);
  printf("\nA média de Salario é %.2f", totalsal/hab);
  printf("\nO maior salario é %i", maiorsal);
  printf("\nO menor salario é %i", menorsal);
  printf("\na Porcentaem de filhos é %f%%", porcen);

  printf("\n\n\nPressione Q para sair");

  char quit;

  if(quit == 'q') {

    return 0;

  }

}