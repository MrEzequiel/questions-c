#include <stdio.h>
#include <stdio.h>
#include <locale.h>



int main(void){

  system("cls");
  setlocale(LC_ALL, "Portguese");

  int primeiroColocados, resultado;

  printf("Digite o números dos primeiros colocados que serem sorteados: ");
  scanf("%d", &primeiroColocados);

  

  if(primeiroColocados >= 20){
    resultado = fatoracao(primeiroColocados);
    printf("\nVamos ter %f combinações possível para o resultado do sorteio\n\n", resultado);
  } else {
    printf("\nO número deve ser maior ou igual a 20\n");
  }

  system("Pause");
  return 0;
}

int fatoracao(int numero){

  int numeroAtual = 1, fatorial = 1;

  while (numeroAtual <= numero)
  {
    fatorial = fatorial * numeroAtual;
    numeroAtual = numeroAtual + 1;
  }
  
  return fatorial;
  
}

