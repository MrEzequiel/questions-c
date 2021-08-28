#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int primeiroTermo, razao, termos, i = 0, PG = 0;

  printf("Digite o primeiro termo da P.G: ");
  scanf("%d", &primeiroTermo);
  printf("Digite a razão da P.G: ");
  scanf("%d", &razao);

  printf("Digite quantos termos será calculado nessa P.G: ");
  scanf("%d", &termos);

  while (termos > i)
  {
    if (i == 0)
    {
      PG = primeiroTermo * razao;
    }
    else
    {
      PG = PG * razao;
    }

    printf("\nP.G: %d", PG);
    i++;
  }

  system("pause");
  return 0;
}