#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ci�ncias da Computa��o da Universidade Anhanguera, Uberl�ndia-MG) (23/08/2023)

/*
12. A granja Frangotech possui um controle automatizado de cada frango da sua produ��o. No p� direito do frango h� um anel com um chip de identifica��o;
no p� esquerdo s�o dois an�is para indicar o tipo de alimento que ele deve consumir. Sabendo que o anel com chip custa R$4,00 e o anel de alimento
custa R$3,50, fa�a um algoritmo para calcular o gasto total da granja para marcar todos os seus frangos que dever� ser informado pelo usu�rio.
*/

int main()
{
    //Declara��o de vari�veis
    int frangos;


    printf("Digite a QTDE de frangos: ");
    scanf("%d", &frangos);

    printf("\nO valor total para identificar os frangos e: R$ %0.2f\n", (float)frangos*(2*(3.5)+4));
    return 0;
}
