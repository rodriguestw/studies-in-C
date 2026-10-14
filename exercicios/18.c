#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Qual sua idade:\n");
    scanf("%d", &idade);

    if (idade <= 12){
        printf("Crianca");
    } else if (idade <= 17){
        printf("Adolescente");
    } else if (idade <= 59){
        printf("Adulto");
    } else if (idade >= 60){
        printf("Idoso");
    }
    
}