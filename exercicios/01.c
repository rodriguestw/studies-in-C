// EXERC�CIO 1 ? Sauda��o

#include <stdio.h>
#include <locale.h>


int main(void) {
     setlocale(LC_ALL, "Portuguese");

    char nome[50];

        printf("Digite seu nome: ");
        scanf("%s", &nome);

        printf("\nOl� %s! Seja bem-vindo(a) � disciplina de l�gica de Programa��o.\n", nome);

    return 0;
    
}