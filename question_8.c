#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int termo, i = 0, serieFib1 = 0, serieFib2 = 1, aux = 0;
  int par = 0;

  printf("Digite a quantidade de termos para a série de Fibonacci: ");
  scanf("%d", &termo);

  do
  {
    aux = serieFib1 + serieFib2;
    serieFib1 = serieFib2;
    serieFib2 = aux;

    if (aux % 2 == 0)
    {
      par += aux;
    }

    printf("%d\n", aux);

    i++;
  } while (termo > i);

  printf("\n\nA soma dos termos pares são: %d \n", par);

  system("pause");
  return 0;
}