#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char produto[50], maiorProduto[50] = "";
    int quantidade, qtdVendas = 0, totalProdutos = 0;
    float preco, totalVenda, faturamento = 0, maiorVenda = 0;
    char continuar;

    do {
        printf("\nNome do produto: ");
        scanf(" %[^\n]", produto);
        printf("Quantidade: ");
        scanf("%d", &quantidade);
        printf("Preco unitario: R$ ");
        scanf("%f", &preco);

        totalVenda = quantidade * preco;
        printf("Total da venda: R$ %.2f\n", totalVenda);

        qtdVendas++;
        totalProdutos += quantidade;
        faturamento += totalVenda;

        if (totalVenda > maiorVenda) {
            maiorVenda = totalVenda;
            snprintf(maiorProduto, sizeof(maiorProduto), "%s", produto);
        }

        printf("Registrar outra venda? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("\n=== RESUMO DO DIA ===\n");
    printf("Vendas realizadas: %d\n", qtdVendas);
    printf("Total de produtos vendidos: %d\n", totalProdutos);
    printf("Faturamento total: R$ %.2f\n", faturamento);
    printf("Maior venda: R$ %.2f (%s)\n", maiorVenda, maiorProduto);
    return 0;
}