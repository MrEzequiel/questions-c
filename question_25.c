#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

  system("cls");
  setlocale(LC_ALL, "Portuguese");

  float altura, raio, pi = 3.14, volume, volume80;

  printf("\nDigite a altura do reservátorio: ");
  scanf("%f", &altura);
  printf("\nDigite o raio do cilindro do reservatorio: ");
  scanf("%f", &raio);

  volume = pi * (raio * raio) * altura;

  volume80 = volume * 0.8;

  printf("\nO volume do reservatorio de água é %.1f litros, mas para segurança só 80 por cento do reservatorio pode ser preenchido, ou seja %.1f litros", volume, volume80);

  system("Pause");
  return 0;
}