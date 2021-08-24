#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int num, soma = 0;
  printf("\n\nEste programa soma os multiplos de 7 entre 100 e 300");

  for (num = 100; num <= 300; num++)
  {
    if (num % 7 == 0)
    {
      soma += num;
    }
  }

  printf("\n\nA soma dos numeros multiplos de 7 entre 100 e 300 é %d", soma);
  printf("\n\nObrigado por ultilizar este programa\n\n");

  system("pause");
  return 0;
}