#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ci�ncias da Computa��o da Universidade Anhanguera, Uberl�ndia-MG) (23/08/2023)

/*
7. Fa�a um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso se a pessoa engordar 20% sobre o peso digitado.

*/

int main()
{
    //Declaracao de vari�veis
    float peso;

    printf("Informe o peso em KG:");
    scanf("%g", &peso);

    printf("\nCaso a pessoa engorde 15%% ficara com: %g KG", peso+(peso*0.15));
    printf("\nCaso a pessoa engorde 20%% ficara com: %g KG\n", peso+(peso*0.20));

    return 0;
}
