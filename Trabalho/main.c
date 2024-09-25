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
    printf("O perimetro do triangulo é: %2.f", perimetro_triangulo(lado1, lado2, lado3));

    return ;
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

// Função para calcular a área do quadrado
float calcular_area_quadrado(float lado) {
    return lado * lado;
}

// Função para calcular o perímetro do quadrado
float calcular_perimetro_quadrado(float lado) {
    return 4 * lado;
}

// Função para calcular a área e o perímetro do quadrado
void calcular_quadrado() {
    float lado;
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    printf("Área do quadrado: %.2f\n", calcular_area_quadrado(lado));
    printf("Perímetro do quadrado: %.2f\n", calcular_perimetro_quadrado(lado));
}

// Função para calcular a área e o perímetro do retângulo
void calcular_retangulo() {
    float largura, altura;
    printf("Digite a largura do retângulo: ");
    scanf("%f", &largura);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);
    printf("Área do retângulo: %.2f\n", calcular_ret_area(largura, altura));
}

// Função para calcular o triângulo
void calcular_triangulo() {
    float base, altura;
    printf("Digite a base do triângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);
    printf("Área do triângulo: %.2f\n", calcular_area_triangulo(base, altura));
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Calcular área e perímetro do Retângulo\n");
        printf("2. Calcular área e perímetro do Triângulo\n");
        printf("3. Calcular área e perímetro do Pentágono\n");
        printf("4. Calcular área do Círculo\n");
        printf("5. Calcular área e perímetro do Quadrado\n");
        printf("0. Sair\n");
        printf("==========================\n");
        printf("Escolha uma opção: ");
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
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
