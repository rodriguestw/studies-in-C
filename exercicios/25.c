#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n, i, soma = 0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        soma += i;
    }
    printf("Soma de 1 ate %d = %d\n", n, soma);
}