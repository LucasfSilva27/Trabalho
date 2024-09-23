#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.14

// Função para calcular a área do retângulo
float calcular_ret_area(float largura, float altura){
    return (largura)*(altura);
}

// Função para calcular o perímetro do retângulo
float calcular_ret_perimetro(float largura, float altura){
    return 2*((largura) + (altura));
}

// Função para calcular a área do triângulo
float calcular_area_triangulo(float base, float altura) {
    return (base * altura) / 2;
}

// Função para calcular o perímetro do triângulo
float calcular_perimetro_triangulo(float lado1, float lado2, float lado3) {
    return lado1 + lado2 + lado3;
}

// Função para calcular o perímetro do pentágono
float calcular_perimetro_pentagono() {
    float lado, perimetro;
    printf("Digite o lado do pentágono: ");
    scanf("%f", &lado);
    perimetro = lado * 5;
    printf("O perímetro do pentágono é: %.2f cm\n", perimetro);
    return perimetro;
}

// Função para calcular a área do pentágono
float calcular_area_pentagono() {
    float apotema, lado, area;
    printf("Digite a apotema do pentágono: ");
    scanf("%f", &apotema);
    printf("Digite o lado do pentágono: ");
    scanf("%f", &lado);
    area = (apotema * lado * 5) / 2;
    printf("A área do pentágono é: %.2f cm²\n", area);
    return area;
}

// Função para calcular a área do círculo
float calcular_area_circulo() {
    float raio;
    printf("Insira o valor do raio do círculo: ");
    scanf("%f", &raio);
    float area = PI * pow(raio, 2);
    printf("A área do círculo é: %.2f cm²\n", area);
    return area;
}

// Função para calcular a área e o perímetro do retângulo
void calcular_retangulo() {
    float largura, altura;
    printf("Digite a largura do retângulo: ");
    scanf("%f", &largura);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    printf("Área do retângulo: %.2f\n", calcular_ret_area(largura, altura));
    printf("Perímetro do retângulo: %.2f\n", calcular_ret_perimetro(largura, altura));
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Cálculo da área do círculo
    calcular_area_circulo();

    // Cálculo da área e perímetro do retângulo
    calcular_retangulo();

    // Cálculo do perímetro e área do pentágono
    calcular_perimetro_pentagono();
    calcular_area_pentagono();

    // Teste para triângulo (como exemplo)
    float base, altura, lado1, lado2, lado3;
    printf("Digite a base do triângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);
    printf("Área do triângulo: %.2f\n", calcular_area_triangulo(base, altura));

    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);
    printf("Perímetro do triângulo: %.2f\n", calcular_perimetro_triangulo(lado1, lado2, lado3));

    return 0;
}
