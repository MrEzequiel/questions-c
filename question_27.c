#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int codigo_pais;

  printf("Digite o código telefônico do pais: ");
  scanf("%d", &codigo_pais);


  if(codigo_pais == 54 || codigo_pais == 591 || codigo_pais == 55 || codigo_pais == 56 || codigo_pais == 57 || codigo_pais == 593 || codigo_pais == 592 || codigo_pais == 594 || codigo_pais == 500 || codigo_pais == 595 || codigo_pais == 51 || codigo_pais == 597 || codigo_pais == 598 || codigo_pais == 58){
    printf("\nO pais é da america do sul");
  } else {
    printf("\nO pais não é da america do sul");
  }

  printf("\n\nTODOS OS PAÍSES DA AMERICA DO SUL COM SEUS CÓDIGO TELEFÔNICO:\n");
    printf("|+54 | Argentina\n");
    printf("|+591| Bolívia\n");
    printf("|+55 | Brasil\n");
    printf("|+56 | Chile\n");
    printf("|+57 | Colômbia\n");
    printf("|+593| Equador\n");
    printf("|+592| Guiana\n");
    printf("|+594| Guiana Francesa\n");
    printf("|+500| Ilhas Malvinas\n");
    printf("|+595| Paraguai\n");
    printf("|+51 | Peru\n");
    printf("|+597| Suriname\n");
    printf("|+598| Uruguai\n");
    printf("|+58 | Venezuela\n\n");



  system("Pause");
  return 0;
}