#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3,14

float circulo(){
    float b,a;
    printf ("Digite o Raio: ");
    scanf("%f",&a);
    return b = PI*(a*2);
}

int main()
{
    float a;
    setlocale(LC_ALL, "Portuguese");
    //por em um case para a funcao circulo
    a = circulo(a);
    printf("A %0.f",a);

    return 0;
}
