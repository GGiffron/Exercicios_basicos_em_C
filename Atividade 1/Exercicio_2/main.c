#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ciências da Computação da Universidade Anhanguera, Uberlândia-MG) (23/08/2023)

/*
2. Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e mostre a quantidade de salários mínimos
que ganha esse funcionário.
*/

int main()
{
    //Declaração de Variaveis
    float salario_min;
    float salario_func;
    float quant_salarios;

    //Atribuição de valores
    printf("Informe o valor do salario minimo: ");
    scanf("%g", &salario_min);
    printf("Informe o valor do salario do funcionario: ");
    scanf("%g", &salario_func);

    //Calculo de qtd de salário minimos
    quant_salarios = salario_func/salario_min;

    printf("O funcionario recebe %g salarios minimos", quant_salarios);


    return 0;
}
