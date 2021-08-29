#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int tanques, i = 1, escolhaUsuario;
  float volumeTotal = 0.0, comprimentoPara, larguraPara, pi = 3.14, raio, altura, aresta;

  printf("Digite a quantidade de tanques de armazenamento de água: ");
  scanf("%d", &tanques);


  while(tanques >= i){

    comprimentoPara = 0.0;
    larguraPara = 0.0;
    raio = 0.0;
    altura = 0.0;
    aresta = 0.0;

    printf("\n\nDigite o formato do tanque %d", i);
    printf("\n1) Paralelepípedo");
    printf("\n2) Cubo");
    printf("\n3) Cilindro");
    printf("\n4) Esfera\n:");
    scanf("%d", &escolhaUsuario);

    i++;


    switch(escolhaUsuario){
      case 1:
        printf("\nDigite o comprimento, largura e altura, respectivamente, do paralelepípedo: ");
        scanf("%f", &comprimentoPara);
        scanf("%f", &larguraPara);
        scanf("%f", &altura);
        
        volumeTotal += comprimentoPara * larguraPara * altura;
        break;
        
      case 2:
        printf("\nDigita a aresta do cubo: ");
        scanf("%f", &aresta);
        
        volumeTotal += aresta * aresta * aresta;
        break;
        
      case 3:
        printf("\nDigite o raio e a altura do cilindro, respectivamente: ");
        scanf("%f", &raio);
        scanf("%f", &altura);

        volumeTotal += pi * (raio*raio) * altura;
        break;
        
      case 4:
        printf("\nDigite o raio da esfera: ");
        scanf("%f", &raio);

        volumeTotal += 4 * pi * (raio * raio * raio) / 3;
        break;
      
      default:
        printf("\nDigite um número válido!");
        i--;
		}

	}

  printf("\n\nO volume total do reservatorio é de %.2f\n\n", volumeTotal);

  system("Pause");
  return 0;
}
