#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14

#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
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

=======

#include <stdio.h>
#include <math.h>

// fun��o para calcular a �rea do ret�ngulo
float calcular_ret_area(float largura, float altura){
    return (largura)*(altura);
}

// fun��o para calcular o per�metro do ret�ngulo
float calcular_ret_perimetro(float largura, float altura){
    return 2*((largura) + (altura));
}



float calcular_area(float base, float altura) {
    return (base * altura) / 2;
}


float calcular_perimetro(float lado1, float lado2, float lado3) {
    return lado1 + lado2 + lado3;
}


>>>>>>> cb09ad5f67ec6a6160e727eb3d676e5f96c8fccf
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


//c�digo da Vanessa
 float largura, altura;

    printf("Digite a largura do ret�ngulo: ");
    scanf("%f", &largura);

    printf("Digite a altura do ret�ngulo: ");
    scanf("%f", &altura);

    // Corrigindo os par�nteses no printf
    printf("�rea do ret�ngulo: %.2f\n", calcular_ret_area(largura, altura));
    printf("Per�metro do ret�ngulo: %.2f\n", calcular_ret_perimetro(largura, altura));


//fim


    return 0;
    ///teste2
}
