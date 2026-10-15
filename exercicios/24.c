#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n, i, r;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        r = n * i;
        printf("%d x %d = %d\n", n, i, r);
    }
}
