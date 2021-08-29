#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(void){

  system("cls");
  setlocale(LC_ALL, "Portuguese");

  float numero1, numero2, resultado1, resultado2, soma;

  printf("Digite o primeiro numero: ");
  scanf("%f", &numero1);
  printf("Digite o segundo numero: ");
  scanf("%f", &numero2);

  resultado1 = log10(numero1);
  resultado2 = log10(numero2);
  soma = resultado1 + resultado2;

  printf("\nO logaritmo de base 10 do primeiro numero é igual a %.5f\n", resultado1);
  printf("\nO logaritmo de base 10 do segundo numero é igual a %.5f\n", resultado2);
  printf("\nA soma dos logaritmos é %.5f\n", soma);

  system("Pause");
  return 0;
}