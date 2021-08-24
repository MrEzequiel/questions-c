#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int primeiroElementoZ, primeiroElementoA, segundoElementoZ, segundoElementoA, terceiroElementoZ, terceiroElementoA;

  printf("Digite o valor do número atômico (z) e número da massa (a) respectivamento do primeiro elemento: ");
  scanf("%d", &primeiroElementoZ);
  scanf("%d", &primeiroElementoA);

  printf("Digite o valor do número atômico (z) e número da massa (a) respectivamento do segundo elemento: ");
  scanf("%d", &segundoElementoZ);
  scanf("%d", &segundoElementoA);

  printf("Digite o valor do número atômico (z) e número da massa (a) respectivamento do terceiro elemento: ");
  scanf("%d", &terceiroElementoZ);
  scanf("%d", &terceiroElementoA);

  printf("\nO primeiro elemento com o segundo elemento, eles tem relação de: %s", comparacao(primeiroElementoZ, segundoElementoZ, primeiroElementoA, segundoElementoA));

  printf("\n\nO primeiro elemento com o terceiro elemento, eles tem relação de: %s", comparacao(primeiroElementoZ, terceiroElementoZ, primeiroElementoA, terceiroElementoA));

  printf("\n\nO segundo elemento com o terceiro elemento, eles tem relação de: %s", comparacao(segundoElementoZ, terceiroElementoZ, segundoElementoA, terceiroElementoA));

  system("pause");
}

char comparacao(int z1, int z2, int a1, int a2)
{
  if (z1 == z2 && a1 != a2)
  {
    return "Isotopos";
  }
  else if (a1 == a2 && z1 != z2)
  {
    return "Isóbaros";
  }
  else if (z1 != z2 && a1 != a2 && (a1 - z1) == (a2 - z2))
  {
    return "Isótonos";
  }
  else
  {
    return "Não possuem relação";
  }
}