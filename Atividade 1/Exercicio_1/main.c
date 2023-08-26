#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ci�ncias da Computa��o da Universidade Anhanguera, Uberl�ndia-MG) (23/08/2023)

/*
1. Uma imobili�ria vende apenas terrenos retangulares. Fa�a um algoritmo para imprimir a �rea do terreno e o valor de venda do mesmo.
Para isto ser� necess�rio o usu�rio informar as dimens�es em metros (frente e lateral) do terreno al�m do valor cobrado pelo metro quadrado.
*/


int main()
{
    //Declara��o de vari�veis gerais

    float frente, lateral, area, valor_m2, valor_total;

    //Atribuir Valores

    printf("Quantos metros o terreno possui de frente: ");
    scanf("%f", &frente); //Recebe o valor da frente do terreno

    printf("Quantos metros o terreno possui de lateral: ");
    scanf("%f", &lateral); //Recebe o valor da lateral do terreno

    printf("Valor do terreno por m2: ");
    scanf("%f\\n", &valor_m2); //Recebe o valor do m2 do terreno

    // Calculo

    area = frente*lateral;
    valor_total = area*valor_m2;

    // Print

    printf("\nArea total do terreno de %f mts de frente com %f mts de lateral e: %f\n", area, frente, lateral);
    printf("O valor deste terreno e: %f\n", valor_total);

    return 0;
}
