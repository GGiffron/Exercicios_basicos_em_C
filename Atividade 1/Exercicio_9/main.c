#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ci�ncias da Computa��o da Universidade Anhanguera, Uberl�ndia-MG) (23/08/2023)

/*
09. Fa�a um algoritmo que leia os dados necess�rios para calcular e exibir a �rea:
a) de um trap�zio.
b) de um quadrado.
c) de um retangulo.
d) de um c�rculo.
e) de um triangulo.
*/

int main()
{
    //Declara��o de variaveis para trap�zio
    float b_maior_trp,b_menor_trp,h_trp;

    printf("Area do trapezio:\n");
    printf("Informe o valor da base maior: ");
    scanf("%f", &b_maior_trp);
    printf("Informe o valor da base menor: ");
    scanf("%f", &b_menor_trp);
    printf("Informe o valor da altura: ");
    scanf("%f", &h_trp);

    printf("A area do trapezio e: %0.2f\n", ((b_maior_trp+b_menor_trp)*h_trp)/2);

    //Declara��o de variaveis do quadrado

    float lado;

    printf("\nArea do quadrado:\n");
    printf("Informe o valor de um dos lados: ");
    scanf("%f", &lado);
    printf("A area do quadrado e: %0.2f\n", lado*lado);

    //Declara��o de variaveis do retangulo

    float largura, altura;

    printf("\nArea do retangulo:\n");
    printf("Informe o valor da largura: ");
    scanf("%f", &largura);
    printf("Informe o valor da altura: ");
    scanf("%f", &altura);
    printf("A area do retangulo e: %0.2f\n", largura*altura);

    //Declara��o de variaveis do circulo

    float raio;

    printf("\nArea do circulo:\n");
    printf("Informe o valor do raio: ");
    scanf("%f", &raio);
    printf("A area do circulo: %0.2f\n", 3.14*raio*raio);

    //Declara��o de variaveis do triangulo

    float base_t, h_t;

    printf("\nArea do triangulo:\n");
    printf("Informe o valor da base: ");
    scanf("%f", &base_t);
    printf("Informe o valor da altura: ");
    scanf("%f", &h_t);
    printf("A area do triangulo e: %0.2f\n", (base_t*h_t)/2);

    return 0;
}
