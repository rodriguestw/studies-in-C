#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int qtd, i;
    float nota, soma = 0, media;

    printf("Quantidade de alunos: ");
    scanf("%d", &qtd);

    for (i = 1; i <= qtd; i++) {
        printf("Nota do aluno %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    if (qtd > 0) {
        media = soma / qtd;
        printf("Media geral da turma: %.2f\n", media);
    } else {
        printf("Quantidade invalida.\n");
    }
}