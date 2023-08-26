#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ciências da Computação da Universidade Anhanguera, Uberlândia-MG) (23/08/2023)

/*
18. Três amigos, Carlos, André e Felipe. decidiram rachar igualmente a conta de um bar.Faça um algoritmo para ler o valor total da conta e imprimir
quanto cada um deve pagar,mas faça com que Carlos e André não paguem centavos.

Ex: uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00 para André e R$35,53 para Felipe.
*/

int main()
{
    //Declaração de variáveis
    float conta, conta_f;


    printf("Informe o valor da conta R$: ");
    scanf("%f", &conta);

    conta_f = conta - ((int)(conta/3)+(int)(conta/3));

    printf("\nCarlos pagara: R$ %d\n", (int)(conta/3));
    printf("Andre pagara: R$ %d\n", (int)(conta/3));
    printf("Felipe pagara: R$ %0.2f\n", conta_f);

    return 0;
}
