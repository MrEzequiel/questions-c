#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void){


  system("cls");
  setlocale(LC_ALL, "Portuguese");

  float consumo, tarifa, valorConsumo, icms = 0.25, pis = 0.0108, confins = 0.05, fatura;

  printf("Digite o consumo da sua conta de luz: ");
  scanf("%f", &consumo);
  printf("Digite a tarifa da sua conta de luz: ");
  scanf("%f", &tarifa);

  valorConsumo = consumo * tarifa;
  fatura = (valorConsumo * icms) + (valorConsumo * pis) + (valorConsumo * confins) + valorConsumo;

  printf("\nO valor final da fatura com impostos é de: %.2f R$\n", fatura);

  system("Pause");
  return 0;
}