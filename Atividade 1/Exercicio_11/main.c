#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ciências da Computação da Universidade Anhanguera, Uberlândia-MG) (23/08/2023)

/*
11. Um tonel de refresco é feito com 8 partes de água mineral e 2 partes de suco de maracujá. Faça um algoritmo para calcular quantos litros
de água e de suco são necessários para se fazer uma certa quantidade de litros de refresco informados pelo usuário.
*/

int main()
{
    //Declaração de variáveis

    float suco;

    printf("Digite a QTDE de lts de suco necessaria: ");
    scanf("%f", &suco);

    printf("\nSera necessario para fazer %g lts de suco de maracuja:\n", suco);
    printf("%0.2f lts de agua\n", suco*0.80);
    printf("%0.2f lts de suco concentrado de maracuja\n", suco*0.20);

    return 0;
}
