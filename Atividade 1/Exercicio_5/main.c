#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ciências da Computação da Universidade Anhanguera, Uberlândia-MG) (23/08/2023)

/*
5. Faça um algoritmo que receba dois números inteiros, calcule e mostre a divisão do primeiro número pelo segundo. Sabe-se que o segundo número
não pode ser zero,portanto não é necessário se preocupar com validações.
*/

int main()
{
    int x, y;

    printf("Digite o primeiro valor:");
    scanf("%d",&x);
    printf("Digite o segundo valor:");
    scanf("%d",&y);

    printf("A divisão de %d por %d e %f", x, y, (float)x/y);

    return 0;
}
