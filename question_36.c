#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  double tempo = 0.317, deslocamento, intervaloTempo;

  printf("Digite tempo de retorno do eco: ");
  scanf("%lf", &intervaloTempo);

  deslocamento = tempo * intervaloTempo;

  printf("\nPrecisa-se %.2lf passo(s) para chegar o outro lado da caverna!\n\n", deslocamento / 0.82);

  system("pause");
  return 0;
}