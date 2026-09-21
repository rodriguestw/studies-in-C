// EXERCÍCIO 3 — Quatro operações

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int a, b, soma, sub, mult, divisao;

    printf("\nDigite dois numeros inteiros:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    soma = a + b;
    sub = a - b;
    mult = a * b;
    divisao = a / b;

    printf("\nSoma: %d\n", soma);
    printf("Subtracao: %d\n", sub);
    printf("Multiplicacao: %d\n", mult);
    printf("Divisao: %d\n", divisao);

    return 0;
}