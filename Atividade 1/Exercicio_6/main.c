#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ciências da Computação da Universidade Anhanguera, Uberlândia-MG) (23/08/2023)

/*
6. Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os cavalos comprados para um haras. O usuário devera
informar a quantidade de cavalos adquiridos.
*/

int main()
{
    //Declaração de variáveis
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
