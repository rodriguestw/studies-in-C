// EXERCÍCIO 7 — Conversão de temperatura
//  F = (C × 9/5) + 32

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int c, f;

    printf("\nDigite em graus celsius\n");
    scanf("%d", &c);

    f = (c * 9 / 5) + 32;

    printf("\n%d Fahrenheit\n", f);

    return 0;

}