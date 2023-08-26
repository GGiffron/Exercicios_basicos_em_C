#include <stdio.h>
#include <stdlib.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ciências da Computação da Universidade Anhanguera, Uberlândia-MG) (23/08/2023)

/*
10. Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual,calcule e mostre.
a) a idade dessa pessoa em anos;
b) a idade dessa pessoa em meses;
c) a idade dessa pessoa em dias; (considere todos os meses com 30 dias)
d) a idade dessa pessoa em semanas, (considere que todos os meses possuem 4 semanas);
*/

int main()
{
    int ano_in, ano_fin;

    printf("Digite o ano inicial: ");
    scanf("%d", &ano_in);
    printf("Digite o ano final: ");
    scanf("%d",&ano_fin);

    printf("\nA idade dessa pessoa em\n");
    printf("anos e: %d\n", (ano_fin-ano_in));
    printf("meses e: %d\n", (ano_fin-ano_in)*12);
    printf("dias e: %d\n", (ano_fin-ano_in)*12*30);
    printf("semanas e: %d\n", (ano_fin-ano_in)*12*4);

    return 0;
}
