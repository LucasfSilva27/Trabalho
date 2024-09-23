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

// Fun��o para calcular o per�metro do tri�ngulo
float calcular_perimetro_triangulo(float lado1, float lado2, float lado3) {
    return lado1 + lado2 + lado3;
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

// Fun��o para calcular a �rea e o per�metro do ret�ngulo
void calcular_retangulo() {
    float largura, altura;
    printf("Digite a largura do ret�ngulo: ");
    scanf("%f", &largura);
    printf("Digite a altura do ret�ngulo: ");
    scanf("%f", &altura);

    printf("�rea do ret�ngulo: %.2f\n", calcular_ret_area(largura, altura));
    printf("Per�metro do ret�ngulo: %.2f\n", calcular_ret_perimetro(largura, altura));
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // C�lculo da �rea do c�rculo
    calcular_area_circulo();

    // C�lculo da �rea e per�metro do ret�ngulo
    calcular_retangulo();

    // C�lculo do per�metro e �rea do pent�gono
    calcular_perimetro_pentagono();
    calcular_area_pentagono();

    // Teste para tri�ngulo (como exemplo)
    float base, altura, lado1, lado2, lado3;
    printf("Digite a base do tri�ngulo: ");
    scanf("%f", &base);
    printf("Digite a altura do tri�ngulo: ");
    scanf("%f", &altura);
    printf("�rea do tri�ngulo: %.2f\n", calcular_area_triangulo(base, altura));

    printf("Digite os tr�s lados do tri�ngulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);
    printf("Per�metro do tri�ngulo: %.2f\n", calcular_perimetro_triangulo(lado1, lado2, lado3));

    return 0;
}
