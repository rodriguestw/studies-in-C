// EXERCÍCIO 1 ? Saudação

#include <stdio.h>
#include <locale.h>


int main(void) {
     setlocale(LC_ALL, "Portuguese");

    char nome[50];

        printf("Digite seu nome: ");
        scanf("%s", &nome);

        printf("\nOlá %s! Seja bem-vindo(a) á disciplina de lógica de Programação.\n", nome);

        return 0;
    
}