#include <stdio.h>
#include <locale.h>

    int main (){
        setlocale(LC_ALL, "Portuguese");

        int item;
        float valor_original, desconto = 0, total;
        char percentual_texto[20];

        printf("Digite o item comprado:\n");
        scanf("%d", &item);

        printf("Digite o valor:\n");
        scanf("%f", &valor_original);

    if (valor_original <= 100){
        printf("\nItem..................%d\n", item);
        printf("Valor Original........R$ %.2f\n", valor_original);
        printf("Percentual............R$ 0,00\n");
        printf("Valor do desconto.....SEM DESCONTO\n");
        printf("Valor final...........%.2f\n", valor_original);

    } else if (valor_original <=500) /* 5% de desconto */ {
         desconto = valor_original * 0.05 ;
         total = valor_original - desconto;

        printf("\nItem..................%d\n", item);
        printf("Valor Original........R$ %.2f\n", valor_original);
        printf("Percentual............R$ -%.2f\n", desconto);
        printf("Valor do desconto.....5%% DE DESCONTO\n");
        printf("Valor final...........R$ %.2f\n", total);

    } else if (valor_original > 500) /* 10% de desconto */ {
         desconto = valor_original * 0.10;
         total = valor_original - desconto;

        printf("\nItem..................%d\n", item);
        printf("Valor Original........R$ %.2f\n", valor_original);
        printf("Percentual............R$ -%.2f\n", desconto);
        printf("Valor do desconto.....10%% DE DESCONTO\n");
        printf("Valor final...........R$ %.2f\n", total);
    }

}