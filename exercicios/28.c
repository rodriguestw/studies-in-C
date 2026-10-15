#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i;
    float num, maior;

    printf("Numero 1: ");
    scanf("%f", &maior);   

    for (i = 2; i <= 10; i++) {
        printf("Numero %d: ", i);
        scanf("%f", &num);
        if (num > maior) {
            maior = num;
        }
    }

    printf("Maior numero informado: %.2f\n", maior);
}