#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14

#include <stdio.h>
#include <stdlib.h>

void CalcularAreaQuadrado() {
    float lado;
    printf("Digite o valor do lado do quadrado para calcular a área: ");
    scanf("%f", &lado);

    float area = lado * lado;
    printf("Área do quadrado: %.2f\n", area);
}

void CalcularPerimetroQuadrado() {
    float lado;
    printf("Digite o valor do lado do quadrado para calcular o perímetro: ");
    scanf("%f", &lado);

    float perimetro = 4 * lado;
    printf("Perímetro do quadrado: %.2f\n", perimetro);
}

float perimetro()
{

 float area,lado,perimetro;

  printf("Digite o lado do pentagono:");
  scanf("%f",&lado);
  perimetro = lado * 5;


   printf("O perimetro do pentagono e %1.f cm",perimetro);
  return perimetro;



}

float area()
{

  float area,p,lado;
  printf("Digite a apotema do pentagono:");
  scanf("%f",&p);
  printf("Digite o lado do pentagono:");
  scanf("%f",&lado);

  area =(p*lado)/2;


   printf("A area do pentagono e %1.f cm",area);
   return area;
}


float circulo(){
    float r;
    printf("Insira o valor do raio\n");
    scanf("%f",&r);
    return (PI*(r*r));
}

int main()
{
    float a;
    setlocale(LC_ALL, "Portuguese");

    printf("A área do círculo é: %.2f\n",circulo());



// vamos ver se esta funcionando


    return 0;
    ///teste2
}
