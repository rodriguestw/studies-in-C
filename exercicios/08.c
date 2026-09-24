// EXERCÍCIO 8 — Salário mensal
// Leia:
// • quantidade de horas trabalhadas;
// • valor recebido por hora.
// Calcule e apresente o salário bruto do funcionário.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int horas, salario, valor;

    printf("Quantidade de horas trabalhadas:\n");
    scanf("%d", &horas );

    printf("Valor recebido pro hora:\n");
    scanf("%d", &valor);

    salario = valor * horas;

    printf("\nSalario bruto:\n%d\n", salario);

}