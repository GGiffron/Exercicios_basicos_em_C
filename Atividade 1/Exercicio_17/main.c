#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ci�ncias da Computa��o da Universidade Anhanguera, Uberl�ndia-MG) (23/08/2023)

/*
17. Uma padaria vende uma certa quantidade de p�es franceses e uma quantidade de broas a cada dia. Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,60.
Ao final do dia, o dono quer saber quanto arrecadou com a venda dos p�es e broas (juntos), enquanto deve guardar numa conta de poupan�a
(10% do total arrecadado)para realizar uma reforma.Voc� foi contratado para fazer os c�lculos para o dono. Com base nestes fatos, fa�a um algoritmo
para ler as quantidades de p�es e de broas, o valor da reforma e depois calcule o valor arrecado, o valor a ser depositado na poupan�a e quantos dias
ser�o necess�rios,caso mantenha o mesmo faturamento, para custear a reforma.
*Requisito adicional: A quantidade de dias deve ser retornado como um valor inteiro.
*/

int main()
{
    //Declara��o de vari�veis

    int broas, paes, dia_nec;
    float reforma, fat_broa, fat_paes, dias;


    //Atribui��o de valores

    printf("Digite a quantidade de paes vendidos: ");
    scanf("%d", &paes);
    printf("Digite a quantidade de broas vendidas: ");
    scanf("%d", &broas);
    printf("Digite o valor da reforma: ");
    scanf("%f", &reforma);

    //Calculos

    fat_broa = (float)broas*1.60;
    fat_paes = (float)paes*0.12;
    dias = (reforma/((fat_broa+fat_paes)*0.10));

    dia_nec = ceil(dias);


    printf("\nFaturamento com a venda de broas: %0.2f", fat_broa);
    printf("\nFaturamento com a venda de paes: %0.2f", fat_paes);
    printf("\nFaturamento diario (paes + broas): %0.2f", fat_broa+fat_paes);
    printf("\nValor do deposito na poupanca: %0.2f", (fat_broa+fat_paes)*0.10);
    printf("\nPara pagar a reforma serao necessarios: %d dias\n", dia_nec);


    return 0;
}
