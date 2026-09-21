// EXERCÍCIOS DE PRATICA PROFFISIONAL - LÓGICA DE PROGAMAÇÃO EM C

#include <stdio.h>
#include <locale.h>


int main(void) {
     setlocale(LC_ALL, "Portuguese");

    char nome[50];

        printf("Digite seu nome: ");
        scanf("%c", &nome);

        printf("Olá %c! Seja bem-vindo(a) á disciplina de lógica de Programação.\n", nome);

        return 0;
    
}