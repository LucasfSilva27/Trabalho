#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14
// Divaldo calculo Triangulo
float calcular_area(float base, float altura) {
    return (base * altura) / 2;
}

float calcular_perimetro(float lado1, float lado2, float lado3) {
    return lado1 + lado2 + lado3;
}
// Flavio Calculo Pentagono
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
// Lucas Silva Circulo
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


    return 0;
}
