#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i, aprovados = 0, reprovados = 0;
    float nota, percentual;

    for (i = 1; i <= 10; i++) {
        printf("Nota do aluno %d: ", i);
        scanf("%f", &nota);

        if (nota >= 7) {
            aprovados++;
        } else {
            reprovados++;
        }
    }

    percentual = (aprovados / 10.0) * 100;

    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);
    printf("Percentual de aprovacao: %.1f%%\n", percentual);
}