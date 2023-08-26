#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ciências da Computação da Universidade Anhanguera, Uberlândia-MG) (23/08/2023)

/*
13. A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml, garrafa de 600 ml e garrafa de 2 litros.
Se um comerciante compra uma determinada quantidade de cada formato, faça um algoritmo para calcular quantos litros de refrigerante ele comprou.
*/

int main()
{
    //Declaração de variáveis

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
