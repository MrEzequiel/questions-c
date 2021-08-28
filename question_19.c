#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int a, b, x, y;

  printf("Digite o valor A: ");
  scanf("%d", &a);
  printf("Digite o valor B: ");
  scanf("%d", &b);

  for (int index = 0; index < 5; index++){
    printf("Digite o valor de X: ");
    scanf("%d", &x);

    y = (a*x) + b;

    printf("\nO valor de Y é: %d\n\n", y);
  }
  
  system("Pause");
  return 0;
}