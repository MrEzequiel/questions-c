#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int numero = 0, i, resultado = 0, soma = 0;

  do
  {
    for (i = 2; i <= numero / 2; i++)
    {
      if (numero % i == 0)
      {
        resultado++;
        i = numero;
      }
    }

    if (resultado == 0)
    {
      soma += numero;
    }

    resultado = 0;
    numero++;
  } while (numero <= 100);

  printf("\nA soma dos números primos de 0 a 100 é de: %d \n", soma);

  system("pause");
  return 0;
}
