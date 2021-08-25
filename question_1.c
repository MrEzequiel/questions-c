#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");
  float baseMaior, baseMenor, altura, area = 0;
  printf("\n\nEste programa determina a área de um trapézio qualquer!");
  printf("\n\nDigite o valor da base maior do trapézio (m): ");
  scanf("%f", &baseMaior);
  printf("\n\nDigite o valor da base menor do trapézio (m): ");
  scanf("%f", &baseMenor);
  printf("\n\nDigite o valor da altura do trapézio (m): ");
  scanf("%f", &altura);

  if (baseMaior > 0 && baseMenor > 0 && altura > 0)
  {
    area = ((baseMaior + baseMenor) * altura) / 2.0;
    printf("\n\nA área do trapézio é de %.2f metros quadrados!", area);
  }
  else
    printf("\n\nNão é possível calcular a área do trapézio! Digite valores válidos!");

  printf("\n\nObrigado por utilizar nosso programa!\n\n");
  system("Pause");
  return 0;
}