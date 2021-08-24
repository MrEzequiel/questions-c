#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int num, i = 1;

  printf("Digite um número para gerar o H: ");
  scanf("%d", &num);

  for (i = 1; i <= num; i++)
  {
    if (i == 1)
    {
      printf("\nH = 1");
    }
    else
    {
      printf(" * 1 / %d", i * i);
    }
  }

  printf("\n\n");

  system("pause");
  return 0;
}