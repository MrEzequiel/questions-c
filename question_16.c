

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  double velocidadeX, velocidadeY, tempo;

  printf("Digite a velocidade do trem X em km/h: ");
  scanf("%lf", &velocidadeX);
  printf("Digite a velocidade do trem Y em km/h: ");
  scanf("%lf", &velocidadeY);

  if (velocidadeX > velocidadeY && velocidadeX >= 100)
  {
    tempo = 10 / (velocidadeX - velocidadeY);

    printf("\n%.2lf minutos após a saída os trens perderão a comunicação via rádio\n\n", tempo * 60);
  }
  else
  {
    printf("\nVelocidades inválidas!\n\n");
  }

  system("pause");
  return 0;
}