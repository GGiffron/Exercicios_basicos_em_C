#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ci�ncias da Computa��o da Universidade Anhanguera, Uberl�ndia-MG) (23/08/2023)

/*
20. Ler um n�mero inteiro com at� quatro d�gitos e imprimir a sa�da da seguinte forma:
MILHARES = x
CENTENA = x
DEZENA = x
UNIDADE = x
*/

int main()
{
    //Declara��o de vari�veis
    int numero, unidade, dezena, centena, milhar;

    printf("Digite um numero de 4 digitos: ");
    scanf("%d", &numero);

    //Digitos

    unidade = numero % 10;
    dezena = (numero/10) % 10;
    centena = (numero/100) %10;
    milhar = (numero / 1000) %10;

    printf("\nMilhar: %d\n", milhar);
    printf("Centena: %d\n", centena);
    printf("Dezena: %d\n", dezena);
    printf("Unidade: %d\n", unidade);

    return 0;
}
