#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ci�ncias da Computa��o da Universidade Anhanguera, Uberl�ndia-MG) (23/08/2023)

/*
3. Fa�a um algoritmo para ler tr�s notas de um aluno em uma disciplina e imprimir a sua m�dia ponderada (as notas tem pesos respectivos de 1, 2 e 3).
*/


int main()
{
    //Declars��o de vari�veis
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
