#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ci�ncias da Computa��o da Universidade Anhanguera, Uberl�ndia-MG) (23/08/2023)

/*
18. Tr�s amigos, Carlos, Andr� e Felipe. decidiram rachar igualmente a conta de um bar.Fa�a um algoritmo para ler o valor total da conta e imprimir
quanto cada um deve pagar,mas fa�a com que Carlos e Andr� n�o paguem centavos.

Ex: uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00 para Andr� e R$35,53 para Felipe.
*/

int main()
{
    //Declara��o de vari�veis
    float conta, conta_f;


    printf("Informe o valor da conta R$: ");
    scanf("%f", &conta);

    conta_f = conta - ((int)(conta/3)+(int)(conta/3));

    printf("\nCarlos pagara: R$ %d\n", (int)(conta/3));
    printf("Andre pagara: R$ %d\n", (int)(conta/3));
    printf("Felipe pagara: R$ %0.2f\n", conta_f);

    return 0;
}
