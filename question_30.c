#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int areas, i = 1, escolhaUsuario, figuras = 0, quadrado = 0, retangulo = 0, losangulo = 0, triangulo = 0, trapezio = 0, circunferencia = 0;
  double areaTotal = 0.0, localArea = 0.0, lado, base, altura, diagonal1, diagonal2, baseMaior, baseMenor, raio;

  printf("Quantas áreas você quer calcular? ");
  scanf("%d", &areas);

  while (areas >= i)
  {
    localArea = 0.0;
    lado = 0.0;
    base = 0.0;
    altura = 0.0;
    diagonal1 = 0.0;
    diagonal2 = 0.0;
    baseMaior = 0.0;
    baseMenor = 0.0;
    raio = 0.0;

    printf("\n\nDigite qual figura plana você quer calcula a área:\n");
    printf("1) Quadrado\n");
    printf("2) Retângulo\n");
    printf("3) Losângulo\n");
    printf("4) Triângulo\n");
    printf("5) Trapézio\n");
    printf("6) Circunferência\n");
    printf("0) Sair\n");
    scanf("%d", &escolhaUsuario);

    i++;

    switch (escolhaUsuario)
    {
    case 1:
      figuras++;
      quadrado++;
      printf("\nDigite o lado do quadrado: ");
      scanf("%lf", &lado);
      localArea = lado * lado;

      printf("\nA área do quadrado é de: %.2lf", localArea);
      areaTotal += localArea;
      break;

    case 2:
      figuras++;
      retangulo++;
      printf("\nDigite a base e a altura, respectivamente, do retângulo: ");
      scanf("%lf%lf", &base, &altura);
      localArea = base * altura;

      printf("\nA área do retângulo é de: %.2lf", localArea);
      areaTotal += localArea;
      break;

    case 3:
      figuras++;
      losangulo++;
      printf("\nDigite a diagonal 1 e diagonal 2, respectivamente, do losângulo: ");
      scanf("%lf%lf", &diagonal1, &diagonal2);
      localArea = (diagonal1 * diagonal2) / 2;

      printf("\nA área do losângulo é de: %.2f", localArea);
      areaTotal += localArea;
      break;

    case 4:
      figuras++;
      triangulo++;
      printf("\nDigite a base e a altura, respectivamente, do triângulo: ");
      scanf("%lf%lf", &base, &altura);
      localArea = (base * altura) / 2;

      printf("\nA área do triângulo é de: %.2lf", localArea);
      areaTotal += localArea;
      break;

    case 5:
      figuras++;
      trapezio++;
      printf("\nDigite a base maior, a base menor e a altura, respectivamente, do trapézio: ");
      scanf("%lf%lf%lf", &baseMaior, &baseMenor, &altura);
      localArea = ((baseMaior + baseMenor) * altura) / 2;

      printf("\nA área do trapézio é de: %.2lf", localArea);
      areaTotal += localArea;
      break;

    case 6:
      figuras++;
      circunferencia++;
      printf("\nDigite o raio da circuferência: ");
      scanf("%lf", &raio);
      localArea = 3.14 * (raio * raio);

      printf("\nA área da circuferência é de: %.2lf", localArea);
      areaTotal += localArea;
      break;

    case 0:
      i += areas;
      printf("\nParado");
      break;

    default:
      i--;
      printf("\nDigite uma opção válida!");
      break;
    }
  }
  printf("\n\nA quantidade total de áreas foi de: %.2lf", areaTotal);
  printf("\nForam calculados %d figura(s)", figuras);
  printf("\n\nFiguras:\n");
  printf("| Quadrado: %d", quadrado);
  printf("\n| Retângulo: %d", retangulo);
  printf("\n| Losângulo: %d", losangulo);
  printf("\n| Triângulo: %d", triangulo);
  printf("\n| Trapézio: %d", trapezio);
  printf("\n| Circunferência: %d", circunferencia);

  system("pause");
  return 0;
}