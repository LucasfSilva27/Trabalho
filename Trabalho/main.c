#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.14

// Fun��o para calcular a �rea do ret�ngulo
float calcular_ret_area(float largura, float altura){
    return (largura)*(altura);
}

// Fun��o para calcular o per�metro do ret�ngulo
float calcular_ret_perimetro(float largura, float altura){
    return 2*((largura) + (altura));
}

// Fun��o para calcular a �rea do tri�ngulo
float calcular_area_triangulo(float base, float altura) {
    return (base * altura) / 2;
}
  float perimetro_triangulo(float lado1,float lado2,float lado3){
  return (lado1 + lado2 + lado3);
  }
float calcular_perimetro_triangulo() {
    float lado1, lado2, lado3;

    printf("Digite o tamanho do lado 1: \n");
    scanf("%f", &lado1);
    printf("Digite o tamanho do lado 2: \n");
    scanf("%f", &lado2);
    printf("Digite o tamanho do lado 3: \n");
    scanf("%f", &lado3);
    printf("O perimetro do triangulo �: %2.f", perimetro_triangulo(lado1, lado2, lado3));

    return ;
}



// Fun��o para calcular o per�metro do pent�gono
float calcular_perimetro_pentagono() {
    float lado, perimetro;
    printf("Digite o lado do pent�gono: ");
    scanf("%f", &lado);
    perimetro = lado * 5;
    printf("O per�metro do pent�gono �: %.2f cm\n", perimetro);
    return perimetro;
}

// Fun��o para calcular a �rea do pent�gono
float calcular_area_pentagono() {
    float apotema, lado, area;
    printf("Digite a apotema do pent�gono: ");
    scanf("%f", &apotema);
    printf("Digite o lado do pent�gono: ");
    scanf("%f", &lado);
    area = (apotema * lado * 5) / 2;
    printf("A �rea do pent�gono �: %.2f cm�\n", area);
    return area;
}

// Fun��o para calcular a �rea do c�rculo
float calcular_area_circulo() {
    float raio;
    printf("Insira o valor do raio do c�rculo: ");
    scanf("%f", &raio);
    float area = PI * pow(raio, 2);
    printf("A �rea do c�rculo �: %.2f cm�\n", area);
    return area;
}

// Fun��o para calcular a �rea do quadrado
float calcular_area_quadrado(float lado) {
    return lado * lado;
}

// Fun��o para calcular o per�metro do quadrado
float calcular_perimetro_quadrado(float lado) {
    return 4 * lado;
}

// Fun��o para calcular a �rea e o per�metro do quadrado
void calcular_quadrado() {
    float lado;
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    printf("�rea do quadrado: %.2f\n", calcular_area_quadrado(lado));
    printf("Per�metro do quadrado: %.2f\n", calcular_perimetro_quadrado(lado));
}

// Fun��o para calcular a �rea e o per�metro do ret�ngulo
void calcular_retangulo() {
    float largura, altura;
    printf("Digite a largura do ret�ngulo: ");
    scanf("%f", &largura);
    printf("Digite a altura do ret�ngulo: ");
    scanf("%f", &altura);
    printf("�rea do ret�ngulo: %.2f\n", calcular_ret_area(largura, altura));
}

// Fun��o para calcular o tri�ngulo
void calcular_triangulo() {
    float base, altura;
    printf("Digite a base do tri�ngulo: ");
    scanf("%f", &base);
    printf("Digite a altura do tri�ngulo: ");
    scanf("%f", &altura);
    printf("�rea do tri�ngulo: %.2f\n", calcular_area_triangulo(base, altura));
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Calcular �rea e per�metro do Ret�ngulo\n");
        printf("2. Calcular �rea e per�metro do Tri�ngulo\n");
        printf("3. Calcular �rea e per�metro do Pent�gono\n");
        printf("4. Calcular �rea do C�rculo\n");
        printf("5. Calcular �rea e per�metro do Quadrado\n");
        printf("0. Sair\n");
        printf("==========================\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                calcular_retangulo();
                break;
            case 2:
                calcular_triangulo();
                calcular_perimetro_triangulo();
                break;
            case 3:
                calcular_perimetro_pentagono();
                printf ("%f",calcular_area_pentagono);
                break;
            case 4:
                calcular_area_circulo();
                break;
            case 5:
                calcular_quadrado();
                break;
            case 0:
                printf("fui\n");
                break;
            default:
                printf("Op��o inv�lida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
