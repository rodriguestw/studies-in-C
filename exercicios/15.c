// EXERCÍCIO 15 ? Maior entre três números
// Leia três números e determine qual deles é o maior.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portugues");

    int a, b, c;

    printf("Digite tres numeros inteiros:\n");
    scanf("%d\n %d\n %d", &a, &b, &c);

    if (a > b && a > c){
        printf("%d é o maior\n", a);
    } else if (b > a && b > c){
        printf("%d é o maior", b);
    } else if (c > a && c > b){
        printf("%d é o maior", c);
    } else {
        printf("Sem um número maior");
    }

}
