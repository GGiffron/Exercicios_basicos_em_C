#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ci�ncias da Computa��o da Universidade Anhanguera, Uberl�ndia-MG) (23/08/2023)

/*
5. Fa�a um algoritmo que receba dois n�meros inteiros, calcule e mostre a divis�o do primeiro n�mero pelo segundo. Sabe-se que o segundo n�mero
n�o pode ser zero,portanto n�o � necess�rio se preocupar com valida��es.
*/

int main()
{
    int x, y;

    printf("Digite o primeiro valor:");
    scanf("%d",&x);
    printf("Digite o segundo valor:");
    scanf("%d",&y);

    printf("A divis�o de %d por %d e %f", x, y, (float)x/y);

    return 0;
}
