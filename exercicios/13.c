// EXERCÍCIO 13 — Número par ou ímpar

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero;

        printf("Digite um numero inteiro:\n");
        scanf("%d", &numero);

        if (numero % 2 == 0){
            printf("O numero eh par\n");
        } else {
            printf("O numero eh impar\n");
        }
}