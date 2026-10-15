#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int voto, v1 = 0, v2 = 0, v3 = 0, total;

    printf("Digite o voto (1, 2 ou 3). Use 0 para encerrar.\n");
    do {
        printf("Voto: ");
        scanf("%d", &voto);

        if (voto == 1) {
            v1++;
        } else if (voto == 2) {
            v2++;
        } else if (voto == 3) {
            v3++;
        } else if (voto != 0) {
            printf("Voto invalido.\n");
        }
    } while (voto != 0);

    total = v1 + v2 + v3;

    printf("\nCandidato 1: %d votos\n", v1);
    printf("Candidato 2: %d votos\n", v2);
    printf("Candidato 3: %d votos\n", v3);
    printf("Total de votos: %d\n", total);

    if (total == 0) {
        printf("Nenhum voto registrado.\n");
    } else if (v1 > v2 && v1 > v3) {
        printf("Vencedor: Candidato 1\n");
    } else if (v2 > v1 && v2 > v3) {
        printf("Vencedor: Candidato 2\n");
    } else if (v3 > v1 && v3 > v2) {
        printf("Vencedor: Candidato 3\n");
    } else {
        printf("Houve empate.\n");
    }
}