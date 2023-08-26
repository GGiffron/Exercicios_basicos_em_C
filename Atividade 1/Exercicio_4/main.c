#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ci�ncias da Computa��o da Universidade Anhanguera, Uberl�ndia-MG) (23/08/2023)

/*
4. Fa�a um algoritmo que calcule e mostre a tabuada de (+, -, * e /) de um n�mero digitado pelo usu�rio.
OBS: Quando se calcula em uma substra��o um numero menor de um n�mero maior (ex:3 - 10) o resultado ser� um n�mero negativo.
Pesquise como desprezar o sinal negativo para sempre termos um n�mero positivo
*/

int main()
{
    int numero, i, k;

    printf("Informe o numero para o calculo da tabuada: ");
    scanf("%d", &numero);

    //Soma e Subtracao

    printf("Tabuada de + e - para o numero %d:\n", numero);

    for (i=0;i<=9;i++){

        printf("%d + %d = %d         %d - %d = %d\n", numero, i, numero + i, numero, i, abs(numero - i));
    }

    //Multiplica��o e Divis�o

    printf("Tabuada de * e / para o numero %d:\n", numero);

    for (k=0;k<=9;k++){

        if (k == 0){
            printf("%d * %d = %d         %d / %d = nao existe divisao por zero\n", numero, k, k, numero, k);
        }
        else if (k > 1){
            printf("%d * %d = %d         %d / %d = %0.2f\n", numero, k, numero*k, numero, k, (float)numero/k);
        }
    }

    return 0;
}
