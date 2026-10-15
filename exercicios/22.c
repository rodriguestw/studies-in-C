#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i;

    for (i = 10; i >=0; i--){
        printf("%d\n", i);
    }
    printf("Fim da contagem!\n");
}