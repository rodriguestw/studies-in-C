#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int qtd, i, aprovados = 0, recuperacao = 0, reprovados = 0;
    char nome[50];
    float n1, n2, media, somaMedias = 0, maiorMedia, menorMedia;

    printf("Quantidade de alunos: ");
    scanf("%d", &qtd);

    if (qtd <= 0) {
        printf("Quantidade invalida.\n");
        return 0;
    }

    for (i = 1; i <= qtd; i++) {
        printf("\nAluno %d\n", i);
        printf("Nome: ");
        scanf(" %[^\n]", nome);
        printf("Nota da 1a avaliacao: ");
        scanf("%f", &n1);
        printf("Nota da 2a avaliacao: ");
        scanf("%f", &n2);

        media = (n1 + n2) / 2;
        somaMedias += media;

        if (i == 1) {
            maiorMedia = media;
            menorMedia = media;
        } else {
            if (media > maiorMedia) maiorMedia = media;
            if (media < menorMedia) menorMedia = media;
        }

        if (media >= 7) {
            aprovados++;
            printf("%s - Media %.2f - Aprovado\n", nome, media);
        } else if (media >= 5) {
            recuperacao++;
            printf("%s - Media %.2f - Recuperacao\n", nome, media);
        } else {
            reprovados++;
            printf("%s - Media %.2f - Reprovado\n", nome, media);
        }
    }

    printf("\n=== RESUMO DA TURMA ===\n");
    printf("Quantidade de alunos: %d\n", qtd);
    printf("Aprovados: %d\n", aprovados);
    printf("Em recuperacao: %d\n", recuperacao);
    printf("Reprovados: %d\n", reprovados);
    printf("Media geral da turma: %.2f\n", somaMedias / qtd);
    printf("Maior media: %.2f\n", maiorMedia);
    printf("Menor media: %.2f\n", menorMedia);
}