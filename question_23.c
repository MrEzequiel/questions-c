#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

  system("cls");
  setlocale(LC_ALL, "Portuguese");

  float capital_inicial, taxa, montante;

  printf("\nDigite o capital inicial: ");
  scanf("%f", &capital_inicial);
  printf("\nDigite a taxa de juros: ");
  scanf("%f", &taxa); 

  montante = (capital_inicial * (taxa/100) * 12) + capital_inicial;

  printf("\nO montante final ao termino de um ano é de %.2f\n\n", montante);

  system("Pause");
  return 0;
}