#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ciências da Computação da Universidade Anhanguera, Uberlândia-MG) (23/08/2023)

/*
20. Ler um número inteiro com até quatro dígitos e imprimir a saída da seguinte forma:
MILHARES = x
CENTENA = x
DEZENA = x
UNIDADE = x
*/

int main()
{
    //Declaração de variáveis
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
