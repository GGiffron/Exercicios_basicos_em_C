#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ci�ncias da Computa��o da Universidade Anhanguera, Uberl�ndia-MG) (23/08/2023)

/*
2. Fa�a um algoritmo que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio, calcule e mostre a quantidade de sal�rios m�nimos
que ganha esse funcion�rio.
*/

int main()
{
    //Declara��o de Variaveis
    float salario_min;
    float salario_func;
    float quant_salarios;

    //Atribui��o de valores
    printf("Informe o valor do salario minimo: ");
    scanf("%g", &salario_min);
    printf("Informe o valor do salario do funcionario: ");
    scanf("%g", &salario_func);

    //Calculo de qtd de sal�rio minimos
    quant_salarios = salario_func/salario_min;

    printf("O funcionario recebe %g salarios minimos", quant_salarios);


    return 0;
}
