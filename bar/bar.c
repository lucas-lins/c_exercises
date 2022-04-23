#include <stdio.h>

int main (void) {

  int idade;
  int quantidade;
  float valor;

  printf("\nFavor, informar idade:\t");
  scanf("%i", &idade);  

  if(idade < 18)
  {
    printf("\nVocê não pode comprar bebidas");
  }
  
  else
  {
    printf("\n*********BAR DO NEL**********");
    printf("\n1.\tWhisky");
    printf("\n2.\tVodka");
    printf("\n3.\tCerveja");
    printf("\n4.\tCachaça");
    printf("\n\nFavor escolher uma das opções acima:  ");

    int option;

    scanf("%i", &option);

    if(option == 1)
    {
      printf("\n*********BAR DO NEL**********");
      printf("\nCódigo\t\tBebida\t\tValor");
      printf("\n100.\t\tWhisky 1\t200");
      printf("\n101.\t\tWhisky 2\t150");
      printf("\n102.\t\tWhisky 3\t140");
      printf("\n\nFavor digitar código da bebida\t");

      int whisky;
      scanf("%i", &whisky);

      switch(whisky) {
        case 100:
          valor = 200; break;
        case 101:
          valor = 150; break;
        case 102:
          valor = 140; break;
        default:
          printf("Código inválido");
      }

      printf("\nQuantas bebidas você quer?\t");
      scanf("%i",&quantidade);

      if(quantidade <= 0)
      {
        printf("\nQuantidade inválida, favor reiniciar");
      }

      else if(quantidade < 5)
      {
        printf("\nVocê comprou %i Whisky código %i", quantidade, whisky);
        printf("\nFavor, pagar %.2f reais", valor = valor*quantidade);
      }

      else if(quantidade < 50)
      {
        printf("\nVocê comprou %i Whisky código %i", quantidade, whisky);
        printf("\nFavor, pagar %.2f reais", valor = valor*quantidade*0.9);
      }

      else if(quantidade < 100)
      {
        printf("\nVocê comprou %i Whisky código %i", quantidade, whisky);
        printf("\nFavor, pagar %.2f reais", valor = valor*quantidade*0.7);
      }

      else
      {
        printf("\nVocê comprou %i Whisky código %i", quantidade, whisky);
        printf("\nFavor, pagar %.2f reais", valor = valor*quantidade*0.65);
      }

    }

    else if(option == 2)
    {
      printf("\n*********BAR DO NEL**********");
      printf("\nCódigo\t\tBebida\t\tValor");
      printf("\n200.\t\tVodka 1\t\t60");
      printf("\n201.\t\tVodka 2\t\t40");
      printf("\n202.\t\tVodka 3\t\t30");
      printf("\n\nFavor digitar código da bebida");

      int vodka;
      scanf("%i", &vodka);

      switch(vodka) {
        case 200:
          valor = 60; break;
        case 201:
          valor = 40; break;
        case 202:
          valor = 30; break;
        default:
          printf("Código inválido");
      }

      printf("\nQuantas bebidas você quer?\t");
      scanf("%i",&quantidade);

      if(quantidade <= 0)
      {
        printf("\nQuantidade inválida, favor reiniciar");
      }

      else if(quantidade < 5)
      {
        printf("\nVocê comprou %i vodka código %i", quantidade, vodka);
        printf("\nFavor, pagar %.2f reais", valor = valor*quantidade);
      }

      else if(quantidade < 50)
      {
        printf("\nVocê comprou %i vodka código %i", quantidade, vodka);
        printf("\nFavor, pagar %.2f reais", valor = valor*quantidade*0.9);
      }

      else if(quantidade < 100)
      {
        printf("\nVocê comprou %i vodka código %i", quantidade, vodka);
        printf("\nFavor, pagar %.2f reais", valor = valor*quantidade*0.7);
      }

      else
      {
        printf("\nVocê comprou %i vodka código %i", quantidade, vodka);
        printf("\nFavor, pagar %.2f reais", valor = valor*quantidade*0.65);
      }
    }

    else if(option == 3)
    {
      printf("\n*********BAR DO NEL**********");
      printf("\nCódigo\t\tBebida\t\tValor");
      printf("\n300.\t\tCerveja 1\t1.50");
      printf("\n301.\t\tCerveja 2\t2.30");
      printf("\n302.\t\tCerveja 3\t3.00");
      printf("\n\nFavor digitar código da bebida");

      int cerveja;
      scanf("%i", &cerveja);

      switch(cerveja) {
        case 300:
          valor = 1.50; break;
        case 301:
          valor = 2.30; break;
        case 302:
          valor = 3.0; break;
        default:
          printf("Código inválido");
      }

      printf("\nQuantas bebidas você quer?\t");
      scanf("%i",&quantidade);

      if(quantidade <= 0)
      {
        printf("\nQuantidade inválida, favor reiniciar");
      }

      else if(quantidade < 5)
      {
        printf("\nVocê comprou %i cerveja código %i", quantidade, cerveja);
        printf("\nFavor, pagar %.2f reais", valor = valor*quantidade);
      }

      else if(quantidade < 50)
      {
        printf("\nVocê comprou %i cerveja código %i", quantidade, cerveja);
        printf("\nFavor, pagar %.2f reais", valor = valor*quantidade*0.9);
      }

      else if(quantidade < 100)
      {
        printf("\nVocê comprou %i cerveja código %i", quantidade, cerveja);
        printf("\nFavor, pagar %.2f reais", valor = valor*quantidade*0.7);
      }

      else
      {
        printf("\nVocê comprou %i cerveja código %i", quantidade, cerveja);
        printf("\nFavor, pagar %.2f reais", valor = valor*quantidade*0.65);
      }
    }

    else if(option == 4)
    {
      printf("\n*********BAR DO NEL**********");
      printf("\nCódigo\t\tBebida\t\tValor");
      printf("\n400.\t\tCachaça 1\t8.00");
      printf("\n401.\t\tCachaça 2\t20.0");
      printf("\n402.\t\tCachaça 3\t22.0");
      printf("\n\nFavor digitar código da bebida");

      int cachaca;
      scanf("%i", &cachaca);

      switch(cachaca) {
        case 400:
          valor = 8.0; break;
        case 401:
          valor = 20.0; break;
        case 402:
          valor = 22.0; break;
        default:
          printf("Código inválido");
      }

      printf("\nQuantas bebidas você quer?\t");
      scanf("%i",&quantidade);

      if(quantidade <= 0)
      {
        printf("\nQuantidade inválida, favor reiniciar");
      }

      else if(quantidade < 5)
      {
        printf("\nVocê comprou %i cachaça código %i", quantidade, cachaca);
        printf("\nFavor, pagar %.2f reais", valor = valor*quantidade);
      }

      else if(quantidade < 50)
      {
        printf("\nVocê comprou %i cachaça código %i", quantidade, cachaca);
        printf("\nFavor, pagar %.2f reais", valor = valor*quantidade*0.9);
      }

      else if(quantidade < 100)
      {
        printf("\nVocê comprou %i cachaça código %i", quantidade, cachaca);
        printf("\nFavor, pagar %.2f reais", valor = valor*quantidade*0.7);
      }

      else
      {
        printf("\nVocê comprou %i cachaça código %i", quantidade, cachaca);
        printf("\nFavor, pagar %.2f reais", valor = valor*quantidade*0.65);
      }
    }

    else
    {
      printf("\nOpção Inválida, favor reiniciar programa");
    }


  }

  printf("\n\nAgradecemos pela preferência, volte sempre");

  return 0;
}
