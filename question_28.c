#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  double hHomem, yDistancia, zAltura, hPredio;

  printf("Digite a altura do homem: ");
  scanf("%lf", &hHomem);
  printf("Digite a distância que o homem está em relação ao prédio: ");
  scanf("%lf", &yDistancia);
  printf("Digite quanto possui do altura: ");
  scanf("%lf", &zAltura);

  hPredio = hHomem * (zAltura + yDistancia) / zAltura;

  printf("\nA altura do predio é de: %.2lf \n\n", hPredio);

  system("pause");
  return 0;
}
