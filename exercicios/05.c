// EXERC�CIO 5 ? �rea do ret�ngulo
// �rea = Base � Altura

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int area, base, altura;

        printf("\nBase:");
        scanf("%d", &base);

        printf("Altura:");
        scanf("%d", &altura);

        area = base * altura;

        printf("\nArea = %d\n", area);

}