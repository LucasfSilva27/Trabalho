#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.14
// Divaldo calculo Triangulo
// função para calcular a área do retângulo
float calcular_ret_area(float largura, float altura){
    return (largura)*(altura);
}

// função para calcular o perímetro do retângulo
float calcular_ret_perimetro(float largura, float altura){
    return 2*((largura) + (altura));
}




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


//código da Vanessa
 float retangulo(float largura,float altura){

    printf("Digite a largura do retângulo: ");
    scanf("%f", &largura);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    // Corrigindo os parênteses no printf
    printf("Área do retângulo: %.2f\n", calcular_ret_area(largura, altura));
    printf("Perímetro do retângulo: %.2f\n", calcular_ret_perimetro(largura, altura));

 }
//fim
int main()
{
    float a;
    setlocale(LC_ALL, "Portuguese");

    printf("A área do círculo é: %.2f\n",circulo());



    return 0;
}
