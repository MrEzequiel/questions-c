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

  if (primeiroElementoZ == segundoElementoZ && primeiroElementoA != segundoElementoA)
  {
    printf("\nO primeiro elemento com o segundo elemento, eles tem relação de: Isotopos");
  }
  else if (primeiroElementoA == segundoElementoA && primeiroElementoZ != segundoElementoZ)
  {
    printf("\nO primeiro elemento com o segundo elemento, eles tem relação de: Isóbaros");
  }
  else if (primeiroElementoZ != segundoElementoZ && primeiroElementoA != segundoElementoA && (primeiroElementoA - primeiroElementoZ) == (segundoElementoA - segundoElementoZ))
  {
    printf("\nO primeiro elemento com o segundo elemento, eles tem relação de: Isótonos");
  }
  else
  {
    printf("\nO primeiro elemento com o segundo elemento, eles tem relação de: Não possuem relação");
  }

  if (primeiroElementoZ == terceiroElementoZ && primeiroElementoA != terceiroElementoA)
  {
    printf("\nO primeiro elemento com o segundo elemento, eles tem relação de: Isotopos");
  }
  else if (primeiroElementoA == terceiroElementoA && primeiroElementoZ != terceiroElementoZ)
  {
    printf("\nO primeiro elemento com o segundo elemento, eles tem relação de: Isóbaros");
  }
  else if (primeiroElementoZ != terceiroElementoZ && primeiroElementoA != terceiroElementoA && (primeiroElementoA - primeiroElementoZ) == (terceiroElementoA - terceiroElementoZ))
  {
    printf("\nO primeiro elemento com o segundo elemento, eles tem relação de: Isótonos");
  }
  else
  {
    printf("\nO primeiro elemento com o segundo elemento, eles tem relação de: Não possuem relação");
  }

  if (segundoElementoZ == terceiroElementoZ && terceiroElementoA != segundoElementoA)
  {
    printf("\nO primeiro elemento com o segundo elemento, eles tem relação de: Isotopos");
  }
  else if (terceiroElementoA == segundoElementoA && segundoElementoZ != segundoElementoZ)
  {
    printf("\nO primeiro elemento com o segundo elemento, eles tem relação de: Isóbaros");
  }
  else if (segundoElementoZ != terceiroElementoZ && terceiroElementoA != segundoElementoA && (terceiroElementoA - segundoElementoZ) == (segundoElementoA - terceiroElementoZ))
  {
    printf("\nO primeiro elemento com o segundo elemento, eles tem relação de: Isótonos");
  }
  else
  {
    printf("\nO primeiro elemento com o segundo elemento, eles tem relação de: Não possuem relação");
  }

  system("pause");
  return 0;
}