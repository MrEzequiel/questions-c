#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");
  float num, produto, mediaGeometrica = 0;
  int i = 1;
  produto = 1;
  printf("\n\nEste programa calcula a média geométrica de 04 números reais!");
  printf("\n\nInforme os 04 números!");
  do
  {
    printf("\n\nDigite o %d° número: ", i);
    scanf("%f", &num);
    produto = produto * num;
    i++;
  } while (i <= 4);
  mediaGeometrica = pow(produto, 0.25);
  printf("\n\nA média geométrica dos 04 números informados é %.2f!", mediaGeometrica);
  printf("\n\nObrigado por utilizar nosso programa!\n\n");
  system("Pause");
  return 0;
}