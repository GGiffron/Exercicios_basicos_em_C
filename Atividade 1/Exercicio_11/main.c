#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ci�ncias da Computa��o da Universidade Anhanguera, Uberl�ndia-MG) (23/08/2023)

/*
11. Um tonel de refresco � feito com 8 partes de �gua mineral e 2 partes de suco de maracuj�. Fa�a um algoritmo para calcular quantos litros
de �gua e de suco s�o necess�rios para se fazer uma certa quantidade de litros de refresco informados pelo usu�rio.
*/

int main()
{
    //Declara��o de vari�veis

    float suco;

    printf("Digite a QTDE de lts de suco necessaria: ");
    scanf("%f", &suco);

    printf("\nSera necessario para fazer %g lts de suco de maracuja:\n", suco);
    printf("%0.2f lts de agua\n", suco*0.80);
    printf("%0.2f lts de suco concentrado de maracuja\n", suco*0.20);

    return 0;
}
