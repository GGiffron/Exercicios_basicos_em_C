#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ciências da Computação da Universidade Anhanguera, Uberlândia-MG) (23/08/2023)

/*
14. A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias de queijo, uma fatia de presunto e uma rodela de hambúrguer.
Sabendo que cada fatia de queijo ou presunto pesa 50 gramas, e que a rodela de hambúrguer pesa 120 gramas, faça um algoritmo em que o dono forneça a quantidade
de sanduíches a fazer, e a máquina informe as quantidades (em quilos) de queijo, presunto e carne necessários para compra.
*/

int main()
{
    //Declaração de variáveis
    int sanduiche;


    printf("Digite a quantidade de sanduiches: ");
    scanf("%d", &sanduiche);

    printf("\nPara produzir %d sanduiches serao necessarios:\n", sanduiche);
    printf("\n%0.2f Kgs de mussarela", (float)sanduiche*2*0.05);
    printf("\n%0.2f Kgs de presunto", (float)sanduiche*0.05);
    printf("\n%0.2f Kgs de hamburguer\n", (float)sanduiche*0.120);

    return 0;
}
