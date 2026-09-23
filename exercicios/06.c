// EXERCÍCIO 6 ? Área do círculo
// Área = ? × raio²
// ? = 3,14159

#include <stdio.h>
#include <locale.h>

int main(){
    float pi = 3.14159;
    float area, raio;

    printf("\nColoque o valor do raio:\n");
    scanf("%f", &raio);

    area = pi * (raio * raio);

    printf("Área = %f", area);

    return 0;
}