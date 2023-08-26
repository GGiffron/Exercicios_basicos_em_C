#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ciências da Computação da Universidade Anhanguera, Uberlândia-MG) (23/08/2023)

/*
16. Uma loja de decoração precisa aumentar o seu faturamento para o próximo mês em 20%. Esta loja deseja atingir este objetivo aumentando a venda
de três produtos. O produto 1 custa R$ 150 o produto 2 R$ 220,00 e o produto 3 R$ 97.00. Faça um algoritmo que receba o valor de faturamento do
último mês e apresente:
a) O faturamento do próximo mês para bater a meta de 20%.
b) A quantidade de peças apenas do produto 1 necessárias para obter a meta desejada.
c) A quantidade de peças apenas do produto 2 necessárias para obter a meta desejada.
d) A quantidade de peças apenas do produto 3 necessárias para obter a meta desejada
*/

int main()
{
    //Declaração de variáveis

    float faturamento_in;

    printf("Digite o valor do faturamento anterior: ");
    scanf("%f", &faturamento_in);

    //Calculos

    printf("\nA meta do proximo mes e: R$ %0.2f\n", faturamento_in+(faturamento_in*0.20));
    printf("Um aumento de: R$ %0.2f\n", faturamento_in*0.2);
    printf("Quantidade de pecas a serem vendidas para atingirmos a meta:\n");

    printf("\nProduto 1: %0.2f pecas\n", (faturamento_in*0.2)/150);
    printf("Produto 2: %0.2f pecas\n", (faturamento_in*0.2)/220);
    printf("Produto 3: %0.2f pecas\n", (faturamento_in*0.2)/97);

    return 0;

}
