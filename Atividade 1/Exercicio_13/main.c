#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ci�ncias da Computa��o da Universidade Anhanguera, Uberl�ndia-MG) (23/08/2023)

/*
13. A f�brica de refrigerantes Meia-Cola vende seu produto em tr�s formatos: lata de 350 ml, garrafa de 600 ml e garrafa de 2 litros.
Se um comerciante compra uma determinada quantidade de cada formato, fa�a um algoritmo para calcular quantos litros de refrigerante ele comprou.
*/

int main()
{
    //Declara��o de vari�veis

    int lata, garrafinha, garrafa;

    printf("Digite a quantidade de latas de 350ml: ");
    scanf("%d", &lata);
    printf("Digite a quantidade de garrafas de 600ml: ");
    scanf("%d", &garrafinha);
    printf("Digite a quantidade de garrafas de 2lts: ");
    scanf("%d", &garrafa);

    printf("\nA quantidade total de litros e: %0.2f\n", (0.350*lata)+(0.600*garrafinha)+(2*garrafa));

    return 0;
}
