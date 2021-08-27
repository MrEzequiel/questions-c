#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	system("cls");
	setlocale(LC_ALL, "Portuguese");

	float P1, P2, T1, T2, velocidade = 0;

	printf("\n\nInforme a posição inicial do móvel (km): ");
	scanf("%f", &P1);
	printf("\n\nInforme a posição final do móvel (km): ");
	scanf("%f", &P2);
	printf("\n\nInforme o tempo inicial de deslocamento do móvel (h): ");
	scanf("%f", &T1);
	printf("\n\nInforme o tempo final de deslocamento do móvel (h): ");
	scanf("%f", &T2);

	velocidade = (P2 - P1) / (T2 - T1);

	printf("\n\nA velocidade média do móvel é de %.2f km/h!\n\n", velocidade);

	system("Pause");
	return 0;
}
