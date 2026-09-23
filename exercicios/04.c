// EXERCÍCIO 4 ? Média do aluno
// Média = (N1 + N2 + N3) / 3

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3, media;

    scanf("%d\n", &n1);
    scanf("%d\n", &n2);
    scanf("%d\n", &n3);

    media = n1 + n2 + n3 / 3;

    printf("Media = %d", media);

}

// Tá errado kkkk