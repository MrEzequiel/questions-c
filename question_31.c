#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

  system("cls");
  setlocale(LC_ALL, "Portuguese");

  float velocidade;

  printf("Digite a velocidade média(em movimento uniforme) em km/h: ");
  scanf("%f", &velocidade);

		printf("\nDe Acre - Rio Branco para: \n");
		printf("\nAlagoas - Maceió (3512.83 km) %.2f horas", 3512.83/velocidade );
		printf("\nAmapá - Macapá (2160.70 km): %.2f horas", 2160.70/velocidade);
		printf("\nAmazonas - Manaus (1149.40 km): %.2f horas", 1149.40/velocidade);
		printf("\nBahia - Salvador (3207.93 km): %.2f horas",3207.93/velocidade);
		printf("\nCeará - Fortaleza (3302.71 km): %.2f horas", 3302.71/velocidade);
		printf("\nEspírito Santo - Vitória (3161.89 km): %.2f horas", 3161.89/velocidade);
		printf("\nGoiás - Goiânia (2138.37 km): %.2f horas", 2138.37/velocidade);
		printf("\nMaranhão - São Luís (2725 km): %.2f horas", 2725/velocidade);
		printf("\nMato Grosso - Cuiabá (1415.12 km): %.2f horas", 1415.12/velocidade);
		printf("\nMato Grosso do Sul - Campo Grande (1828.05  km): %.2f horas", 1828.05 /velocidade );
		printf("\nMinas Gerais - Belo Horizonte (2787.84 km): %.2f horas", 2787.84/velocidade);
		printf("\nPará - Belém (2334.65 km): %.2f horas", 2334.65/velocidade);
		printf("\nParaíba - João Pessoa (3635.21 km): %.2f  horas", 3635.21/velocidade);
		printf("\nParaná - Curitiba (2602.69 km): %.2f horas", 2602.69/velocidade);
		printf("\nPernambuco - Recife (3620.87 km): %.2f horas", 3620.87/velocidade);
		printf("\nPiauí - Teresina (2808.31 km): %.2f horas", 2808.31/velocidade);
		printf("\nRio de Janeiro - Rio de Janeiro (2983.85 km): %.2f horas", 2983.85/velocidade);
		printf("\nRio Grande do Norte - Natal (3618.49 km): %.2f horas", 3618.49/velocidade);
		printf("\nRio Grande do Sul - Porto Alegre (2815.61 km): %.2f horas", 2815.61/velocidade);
		printf("\nRondônia - Porto Velho (449.18 km): %.2f horas", 449.18/velocidade);
		printf("\nRoraima - Boa Vista (1627.36 km): %.2f horas", 1627.36/velocidade);
		printf("\nSanta Catarina - Florianópolis (2811.06 km): %.2f horas", 2811.06/velocidade);
		printf("\nSão Paulo - São Paulo (2706 km): %.2f horas", 2706/velocidade);
		printf("\nSergipe - Aracaju (3360.95 km): %.2f horas", + 3360.95/velocidade);
		printf("\nTocantins - Palmas (2132.04 km): %.2f horas", 2132.04/velocidade);
		printf("\nDistrito Federal - Brasília (capital do país e sede do governo) (2247.88 km): %.2f horas \n\n", 2247.88/velocidade);


  system("Pause");
  return 0;
}