#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int num, numero, i = 0, par = 0, impar = 0, maior = 0, menor = 0;
  float media = 0;

  printf("Digite a quantidade de número: ");
  scanf("%d", &num);

  while (i < num)
  {
    printf("\nDigite um número: ");
    scanf("%d", &numero);

    if (i == 0)
    {
      menor = numero;
      maior = numero;
    }

    if (numero % 2 == 0)
    {
      par++;
    }
    else
    {
      impar++;
    }

    if (numero > maior)
    {
      maior = numero;
    }
    else if (numero < menor)
    {
      menor = numero;
    }

    media += numero;
    i++;
  }

  printf("\n\n|Números ímpares: %d", impar);
  printf("\n|Números pares: %d", par);
  printf("\n|O maior número: %d", maior);
  printf("\n|O menor número: %d", menor);
  printf("\n|A média de todos os números: %.2f \n\n", media / num);

  system("pause");
  return 0;
}