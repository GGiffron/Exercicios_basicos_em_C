#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ci�ncias da Computa��o da Universidade Anhanguera, Uberl�ndia-MG) (23/08/2023)

/*
19. Entrar com o dia e o m�s de uma data e informar quantos dias se passaram desde o in�cio do ano. Esque�a a quest�o dos anos bissextos e
considere sempre que um m�s possui 30 dias.
*/

int main()
{
    //Declara��o de vari�veis

    int dia, mes;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("\nA quantidade de dias que se passaram foi: %d dias\n", (mes*30)+dia);

    return 0;
}
