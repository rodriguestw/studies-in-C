// EXERCÍCIO 9 — Consumo de combustível

#include <stdio.h>
#include <locale.h>

int main(){
    int distancia, litros, km;

        printf("Dintancia percorrida em quilometros: \n");
        scanf("%d", &distancia);

        printf("Quantidade de combustivel utilizado em litros: \n");
        scanf("%d", &litros);

        km = distancia / litros;

        printf("Comcumo medio do veiculo: %dKm/L\n", km);
}