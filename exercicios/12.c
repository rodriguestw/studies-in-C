// EXERCÍCIO 12 — Número positivo ou negativo
// Leia um número e informe se ele é: positivo; negativo; zero.

#include <stdio.h>
#include <locale.h>

int main(){

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0){
        printf("positivo");
    } else if (numero < 0){
        printf("negativo");
    } else {
        printf("parabens, eh zero");
    }
    
}