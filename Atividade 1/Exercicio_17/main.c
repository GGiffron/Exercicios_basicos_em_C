#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Programado por Gabriel Giffron da Costa Silva (Estudante de Ciências da Computação da Universidade Anhanguera, Uberlândia-MG) (23/08/2023)

/*
17. Uma padaria vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,60.
Ao final do dia, o dono quer saber quanto arrecadou com a venda dos pães e broas (juntos), enquanto deve guardar numa conta de poupança
(10% do total arrecadado)para realizar uma reforma.Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo
para ler as quantidades de pães e de broas, o valor da reforma e depois calcule o valor arrecado, o valor a ser depositado na poupança e quantos dias
serão necessários,caso mantenha o mesmo faturamento, para custear a reforma.
*Requisito adicional: A quantidade de dias deve ser retornado como um valor inteiro.
*/

int main()
{
    //Declaração de variáveis

    int broas, paes, dia_nec;
    float reforma, fat_broa, fat_paes, dias;


    //Atribuição de valores

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
