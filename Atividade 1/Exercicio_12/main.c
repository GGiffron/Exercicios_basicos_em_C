#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ciências da Computação da Universidade Anhanguera, Uberlândia-MG) (23/08/2023)

/*
12. A granja Frangotech possui um controle automatizado de cada frango da sua produção. No pé direito do frango há um anel com um chip de identificação;
no pé esquerdo são dois anéis para indicar o tipo de alimento que ele deve consumir. Sabendo que o anel com chip custa R$4,00 e o anel de alimento
custa R$3,50, faça um algoritmo para calcular o gasto total da granja para marcar todos os seus frangos que deverá ser informado pelo usuário.
*/

int main()
{
    //Declaração de variáveis
    int frangos;


    printf("Digite a QTDE de frangos: ");
    scanf("%d", &frangos);

    printf("\nO valor total para identificar os frangos e: R$ %0.2f\n", (float)frangos*(2*(3.5)+4));
    return 0;
}
