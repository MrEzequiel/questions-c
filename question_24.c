#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int temperatura_acetona;

  printf("Digite a temperatura da acetona: ");
  scanf("%d", &temperatura_acetona);

  if (temperatura_acetona > 56)
  {
    printf("\n\nA temperatura da acetona está superior ao ponto de ebulição.\n\n");
  }
  else if (temperatura_acetona < -95)
  {
    printf("\n\nA temperatura da acetona está temperatura inferior ao ponto de fusão.\n\n");
  }
  else
  {
    printf("\n\nA temperatura da acetona está normal.\n\n");
  }

  system("pause");
  return 0;
}