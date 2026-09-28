// EXERCÍCIO 14 ? Maior entre dois números
// Leia dois números diferentes e apresente qual deles é o maior

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int a, b;

    printf("Digite um número inteiro:\n");
    scanf("%d", &a);

    printf("Digite outro número inteiro:\n");
    scanf("%d", &b); 

    if (a > b){
        printf("%d é o maior\n", a);
    } else if (a == b)
    {
        printf("%d é igual a %d\n", a, b);
    } else {
        printf("%d é o maior\n", b);
    }
    
    return 0;
}