#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int altura, peso;
    float imc;

    printf("Digite sua altura:\n");
    scanf("%d", &altura);

    printf("Digite seu peso:\n");
    scanf("%d", &peso);

    imc = altura * 2 / peso;

    if (imc < 18.5){
        printf("Abaixo do peso\n");
    } else if (imc <= 24.9){
        printf("Peso adequado\n");
    } else if (imc <= 29.9){
        printf("Sobrepeso\n");
    } else if (imc >= 30.0){
        printf("Obesidade\n");
    }
    
    
    
}