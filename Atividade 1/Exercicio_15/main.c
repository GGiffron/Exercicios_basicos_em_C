#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ciências da Computação da Universidade Anhanguera, Uberlândia-MG) (23/08/2023)

/*
15. A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, R$15,00 por hora extra e R$ 90 reais por cada dependente menor que 6 anos.
Faça um algoritmo que solicite a quantidade de horas normais e extras trabalhadas no mês além da quantidade de dependentes menores que 6 anos.
Considere que o salário líquido é igual ao salário de horas normais descontando-se 11% de impostos. O salário final é o salário liquido mais o
valor recebido por cada dependente mais as horas extras.
*/

int main()
{
    //Declaração de variáveis

    int h_normal, h_extra, dependentes;

    printf("Digite a quantidade total de horas normais: ");
    scanf("%d", &h_normal);
    printf("Digite a quantidade total de horas extras: ");
    scanf("%d", &h_extra);
    printf("Digite a quantidade total de dependentes menores que 6 anos: ");
    scanf("%d", &dependentes);

    //Calculos e atribuições

    printf("\nHoras normais: R$ %0.2f\n", (float)h_normal*10);
    printf("Adicional de Horas Extras: R$ %0.2f\n", (float)h_extra*15);
    printf("Adicional de Dependentes: R$ %0.2f\n", (float)dependentes*90);
    printf("Salario liquido (hrs normais - desconto): R$ %0.2f\n",(float)(h_normal*10) - (h_normal*10*0.11));
    printf("Salario final: R$ %0.2f\n",((float)h_normal*10-(0.11*10*h_normal))+((float)dependentes*90)+((float)h_extra*15));
    return 0;
}
