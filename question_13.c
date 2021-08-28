#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int numero, i, resultado = 0;

  printf("\n\nDigite um numero para verificar se ele é primo: ");
  scanf("%d", &numero);

  for(i = 2; i <= numero / 2; i++){
    if(numero % i == 0){
      resultado++;
      i = numero;
    }
  }

  if(resultado == 0){
    printf("\nO numero é primo\n\n");
  } else {
    printf("\nO numero não é primo!\n\n");
  }

  system("Pause");
  return 0;
}