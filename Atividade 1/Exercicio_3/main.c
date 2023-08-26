#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ciências da Computação da Universidade Anhanguera, Uberlândia-MG) (23/08/2023)

/*
3. Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média ponderada (as notas tem pesos respectivos de 1, 2 e 3).
*/


int main()
{
    //Declarsção de variáveis
    float nota_1, nota_2, nota_3, media;

    //Scans
    printf("Informe a nota 1: ");
    scanf("%g", &nota_1);

    printf("Informe a nota 2: ");
    scanf("%g", &nota_2);

    printf("Informe a nota 3: ");
    scanf("%g", &nota_3);

    //calculo da media ponderada

    media = ((nota_1)+(nota_2 * 2)+(nota_3 * 3))/ 6;

    printf("A media ponderadas das notas %g, %g, %g e: %g", nota_1, nota_2, nota_3, media);


    return 0;
}
