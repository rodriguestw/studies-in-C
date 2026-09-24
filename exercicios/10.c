// EXERCÍCIO 10 ? Valor da compra

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int quantidade;
    char produto[50];
    float preco, valor;

        printf("\nNome do produto: \n");
            scanf("%50s", &produto);

        printf("\nQuantidade comprada: \n");
            scanf("%d", &quantidade);

        printf("\nPreço: \n");
            scanf("%f", &preco);

        valor = preco * quantidade;

        printf("\nValor total da compra:\n");
        printf("\n%s.....%dX\n", produto, quantidade);
        printf("R$ %.2f\n", valor);
    
    return 0;
}