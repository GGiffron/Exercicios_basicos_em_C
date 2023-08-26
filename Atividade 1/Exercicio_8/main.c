#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ci�ncias da Computa��o da Universidade Anhanguera, Uberl�ndia-MG) (23/08/2023)

/*
8. Fa�a um algoritmo para ler o sal�rio de um funcion�rio e aument�-Io em 15%. Ap�soaumento, desconte 11% de INSS e 8% de FGTS. Imprima o
sal�rio inicial, o sal�rio como aumento, o sal�rio final, o desconto do INSS, o desconto do FGTS e o Total de Descontos(INSS+FGTS).
*/

int main()
{
    //Declaracao de variaveis

    float salario_in, descontos;

    //c�lculos e atribui��es

    printf("Informe o salario: ");
    scanf("%g", &salario_in);

    printf("\nSalario Inicial: %g", salario_in);
    printf("\nSalario Reajustado: %g", salario_in+(salario_in*0.15));
    printf("\nDesconto 11%% INSS: %g", (salario_in+(salario_in*0.15))*0.11);
    printf("\nDesconto 8%% FGTS: %g", (salario_in+(salario_in*0.15))*0.08);

    descontos = ((salario_in+(salario_in*0.15))*0.11)+((salario_in+(salario_in*0.15))*0.08);

    printf("\nTotal Descontos INSS+FGTS: %g", descontos);
    printf("\nSalario Final: %g\n", ((salario_in+(salario_in*0.15))-descontos));

    return 0;
}
