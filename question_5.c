#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

  system("cls");
  setlocale(LC_ALL, "Portuguese");

  float peso=0.0, pesoAtualMer=0.0, pesoAtualVenus=0.0, pesoAtualMarte=0.0, pesoAtualJup=0.0, pesoAtualSatu=0.0, pesoAtualUra=0.0, pesoAtualNet=0.0;
  printf("\n\nEste programa calcula o seu peso nos outros planetas do sistema solar");
  printf("\n\nDigite o seu peso em KG: ");
  scanf("%f", &peso);
  pesoAtualMer = peso * 0.37;
  printf("\n\nSeu peso no planeta Mercurio, é de %.2f Kg", pesoAtualMer);
  pesoAtualVenus = peso * 0.88;
  printf("\n\nSeu peso no planeta Venus, é de %.2f Kg", pesoAtualVenus);
  pesoAtualMarte = peso * 0.38;
  printf("\n\nSeu peso no planeta Marte, é de %.2f Kg", pesoAtualMarte);
  pesoAtualJup = peso * 2.64;
  printf("\n\nSeu peso no planeta Jupter, é de %.2f Kg", pesoAtualJup);
  pesoAtualSatu = peso * 1.15;
  printf("\n\nSeu peso no planeta Saturno, é de %.2f Kg", pesoAtualSatu);
  pesoAtualUra = peso * 1.17;
  printf("\n\nSeu peso no planeta Urano, é de %.2f Kg", pesoAtualNet);
  pesoAtualNet = peso * 1.18;
  printf("\n\nSeu peso no planeta Netuno, é de %.2f Kg", pesoAtualUra);


  printf("\n\nObrigado por ultilizar nosso programa");
  system("Pause");
  return 0;

}