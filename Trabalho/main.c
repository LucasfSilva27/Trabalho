#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14

#include <stdio.h>
#include <stdlib.h>

void CalcularAreaQuadrado() {
    float lado;
    printf("Digite o valor do lado do quadrado para calcular a �rea: ");
    scanf("%f", &lado);

    float area = lado * lado;
    printf("�rea do quadrado: %.2f\n", area);
}

void CalcularPerimetroQuadrado() {
    float lado;
    printf("Digite o valor do lado do quadrado para calcular o per�metro: ");
    scanf("%f", &lado);

    float perimetro = 4 * lado;
    printf("Per�metro do quadrado: %.2f\n", perimetro);
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

    printf("A �rea do c�rculo �: %.2f\n",circulo());



// vamos ver se esta funcionando


    return 0;
    ///teste2
}
