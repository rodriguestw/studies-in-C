// EXERCÍCIO 2 — Soma de dois números

#include <stdio.h>
#include <locale.h>

int main(){
    int a, b, c;

    printf("\nDigite dois numeros inteitos:\n");
    printf("\no primeiro numero: \n");
    scanf("%d", &a);

    printf("\no segundo numero: \n");
    scanf("%d", &b);

    c = a + b;

    printf("\nresultado: %d\n", c);

    return 0;
}