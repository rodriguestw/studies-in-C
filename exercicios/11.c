// PARTE II – ESTRUTURAS CONDICIONAIS
// EXERCÍCIO 11 — Maior de idade

#include <stdio.h>
#include <locale.h>

int main (){
    int idade;

    printf("\nSua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("\nMaior de idade\n");
    } else {
        printf("Menor de idade");
    } 
}