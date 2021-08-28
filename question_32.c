#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  double tempo, esferaA, esferaB, velocidade;

  printf("Digite o tamanho da esfera A e B: ");
  scanf("%lf%lf", &esferaA, &esferaB);
  printf("Digite a velocidade de deslocamento da esfera A: ");
  scanf("%lf", &velocidade);

  tempo = (esferaB - esferaA) / velocidade;

  printf("\nO tempo de encontro entre as duas esferas é de: %.2lf \n\n", tempo);

  system("pause");
  return 0;
}