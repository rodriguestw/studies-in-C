#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;
    char operacao;
    int resultado;

    printf("Primeiro numero:\n");
    scanf("%d", &n1);

    printf("Segundo numero:\n");
    scanf("%d", &n2);

    printf("Operacao desejada(+, -, * ou /):\n"); 
    scanf(" %c", &operacao);

    if (operacao == '+'){
        resultado = n1 + n2;
        printf("RESULTADO:\n%d\n", resultado);

    } else if(operacao == '-'){
        resultado = n1 - n2;
        printf("RESULTADO:\n%d\n", resultado);

    } else if(operacao == '*'){
        resultado = n1 * n2;
        printf("RESULTADO:\n%d\n", resultado);
    } else if (operacao == '/'){
        if (n2 == 0){
            printf("Erro!! Nao e possivel dividir por zero jumento\n");
        } else {
            resultado = n1 / n2;
            printf("RESULTADO:\n%d\n", resultado);}
    } else {
        printf("Valor invalido!");
    }
}