#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ci�ncias da Computa��o da Universidade Anhanguera, Uberl�ndia-MG) (23/08/2023)

/*
14. A lanchonete Gostosura vende apenas um tipo de sandu�che, cujo recheio inclui duas fatias de queijo, uma fatia de presunto e uma rodela de hamb�rguer.
Sabendo que cada fatia de queijo ou presunto pesa 50 gramas, e que a rodela de hamb�rguer pesa 120 gramas, fa�a um algoritmo em que o dono forne�a a quantidade
de sandu�ches a fazer, e a m�quina informe as quantidades (em quilos) de queijo, presunto e carne necess�rios para compra.
*/

int main()
{
    //Declara��o de vari�veis
    int sanduiche;


    printf("Digite a quantidade de sanduiches: ");
    scanf("%d", &sanduiche);

    printf("\nPara produzir %d sanduiches serao necessarios:\n", sanduiche);
    printf("\n%0.2f Kgs de mussarela", (float)sanduiche*2*0.05);
    printf("\n%0.2f Kgs de presunto", (float)sanduiche*0.05);
    printf("\n%0.2f Kgs de hamburguer\n", (float)sanduiche*0.120);

    return 0;
}
