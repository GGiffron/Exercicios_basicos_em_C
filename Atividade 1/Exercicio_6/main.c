#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ci�ncias da Computa��o da Universidade Anhanguera, Uberl�ndia-MG) (23/08/2023)

/*
6. Fa�a um algoritmo para calcular quantas ferraduras s�o necess�rias para equipar todos os cavalos comprados para um haras. O usu�rio devera
informar a quantidade de cavalos adquiridos.
*/

int main()
{
    //Declara��o de vari�veis
    int cavalos;
    float valor_ferradura;

    //Atribuir Valores
    printf("Informe a quantidade de cavalos:");
    scanf("%d", &cavalos);
    printf("Informe o valor de cada ferradura R$:");
    scanf("%f", &valor_ferradura);
    printf("\nA quantidade de ferraduras necessarias: %d\n", cavalos*4);
    printf("Valor total para a compra das ferraduras: R$ %f\n", valor_ferradura*cavalos*4);

    return 0;
}
