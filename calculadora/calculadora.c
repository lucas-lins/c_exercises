/* 11- Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (+, -, /, *). O usuário escolhe uma das opções e o seu programa então pede dois valores reais, realiza a operação e imprime o resultado na tela. */

#include <stdio.h>

int main(void) {

  printf("\n***OPERAÇÕES MATEMÁTICAS***\n\n");
  printf("+\tAdição\n");
  printf("-\tSubtração\n");
  printf("/\tDivisão\n");
  printf("*\tMultiplicação\n");
  printf("\nFavor escoher uma operação\n\n");

  char conta;

  scanf("%c", &conta);

  switch(conta)
  {
    case '+':
      printf("Você escolheu a Soma");
      break;

    case '-':
      printf("Você escolheu a Subtração");
      break;
    
    case '*':
      printf("Você escolheu a Multiplicação");
      break;

    case '/':
      printf("Você escolheu a Divisão");
      break;
    
    default:
      printf("Tecla inválida");
      break;
  }

  printf("\n\nFavor escolher dois números reais\n\n\n");

  float num1, num2;

  scanf("%f %f", &num1, &num2);

  if (conta == '+')
  {
    printf("%.2f + %.2f = %.2f", num1, num2, num1+num2);
  }

  else if (conta == '-')
  {
    printf("%.2f - %.2f = %.2f", num1, num2, num1-num2);
  }

  else if (conta == '*')
  {
    printf("%.2f * %.2f = %.2f", num1, num2, num1*num2);
  }

  else if (conta == '/')
  {
    printf("%.2f / %.2f = %.2f", num1, num2, num1/num2);
  }
  
  else
  {
    printf("Inválido");
  }

  return 0;
}