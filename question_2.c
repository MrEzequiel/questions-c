#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  double area = 0, pi = 3.14, raio = 0;

  printf("\n\nEste programa calcula a area de um circulo!");
  printf("\n\nDigite o valor do raio do circulo: ");
  scanf("%lf", &raio);

  area = pi * raio * raio;

  printf("\n\nA area do circulo é: %.2lf", area);

  system("pause");
  return 0;
}