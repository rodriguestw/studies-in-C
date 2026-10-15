#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float litros, preco, bruto, percentual, desconto, final;

    printf("Litros abastecidos: ");
    scanf("%f", &litros);
    printf("Preco do litro: R$ ");
    scanf("%f", &preco);

    bruto = litros * preco;

    if (litros < 20) {
        percentual = 0;
    } else if (litros <= 40) {
        percentual = 3;
    } else {
        percentual = 5;
    }

    desconto = bruto * percentual / 100;
    final = bruto - desconto;

    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Desconto (%.0f%%): R$ %.2f\n", percentual, desconto);
    printf("Valor final: R$ %.2f\n", final);
    
}   