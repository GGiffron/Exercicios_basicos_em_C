#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ciências da Computação da Universidade Anhanguera, Uberlândia-MG) (23/08/2023)

/*
1. Uma imobiliária vende apenas terrenos retangulares. Faça um algoritmo para imprimir a área do terreno e o valor de venda do mesmo.
Para isto será necessário o usuário informar as dimensões em metros (frente e lateral) do terreno além do valor cobrado pelo metro quadrado.
*/


int main()
{
    //Declaração de variáveis gerais

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
