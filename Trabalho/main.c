#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14

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
}
