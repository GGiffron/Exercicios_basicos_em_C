#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ciências da Computação da Universidade Anhanguera, Uberlândia-MG) (23/08/2023)

/*
4. Faça um algoritmo que calcule e mostre a tabuada de (+, -, * e /) de um número digitado pelo usuário.
OBS: Quando se calcula em uma substração um numero menor de um número maior (ex:3 - 10) o resultado será um número negativo.
Pesquise como desprezar o sinal negativo para sempre termos um número positivo
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

    //Multiplicação e Divisão

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
