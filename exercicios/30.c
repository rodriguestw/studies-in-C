#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float saldo = 1000.00, valor;
    int opcao;

    do {
        printf("\n=== CAIXA ELETRONICO ===\n");
        printf("1. Consultar saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;
            case 2:
                printf("Valor do deposito: R$ ");
                scanf("%f", &valor);
                if (valor > 0) {
                    saldo += valor;
                    printf("Deposito realizado!\n");
                } else {
                    printf("Valor invalido.\n");
                }
                break;
            case 3:
                printf("Valor do saque: R$ ");
                scanf("%f", &valor);
                if (valor <= 0) {
                    printf("Valor invalido.\n");
                } else if (valor > saldo) {
                    printf("Saldo insuficiente.\n");
                } else {
                    saldo -= valor;
                    printf("Saque realizado!\n");
                }
                break;
            case 4:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 4);
}