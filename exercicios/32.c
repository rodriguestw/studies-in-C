#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

     int entrada, saida, horas;
    float total;

    printf("Hora de entrada (0-23): ");
    scanf("%d", &entrada);
    printf("Hora de saida (0-23): ");
    scanf("%d", &saida);

    horas = saida - entrada;
    if (horas < 0) {
        horas += 24;   // saiu no dia seguinte
    }
    if (horas == 0) {
        horas = 1;     // minimo de uma hora cobrada
    }

    if (horas == 1) {
        total = 10.00;
    } else {
        total = 10.00 + (horas - 1) * 5.00;
    }

    printf("Tempo de permanencia: %d hora(s)\n", horas);
    printf("Valor total: R$ %.2f\n", total);
}