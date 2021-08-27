#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int pessoas, i;
  double cotacao_dolar = 5.12, cotacao_libra = 7.11, montante_pessoa, dolar, libra, montante = 0.0;

  printf("Digite o número de pessoas do grupo: ");
  scanf("%d", &pessoas);

  for (i = 1; i <= pessoas; i++)
  {
    printf("\n\nDigite a quantida de dólares americanos e libras britânicas, respectivamente, da pessoa %d: ", i);
    scanf("%lf%lf", &dolar, &libra);

    montante_pessoa = (dolar * cotacao_dolar) + (libra * cotacao_libra);
    montante += montante_pessoa;

    printf("\nO montante em real da pessoa %d é igual: R$ %.2lf", i, montante_pessoa);
  }

  printf("\n\nO valor total do montante da(s) %d pessoas foi de: R$ %.2lf \n\n", pessoas, montante);

  system("pause");
  return 0;
}