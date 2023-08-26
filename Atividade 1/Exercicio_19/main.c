#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ciências da Computação da Universidade Anhanguera, Uberlândia-MG) (23/08/2023)

/*
19. Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do ano. Esqueça a questão dos anos bissextos e
considere sempre que um mês possui 30 dias.
*/

int main()
{
    //Declaração de variáveis

    int dia, mes;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("\nA quantidade de dias que se passaram foi: %d dias\n", (mes*30)+dia);

    return 0;
}
