#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 1;

    for (i = 1; i <= 10; i++){
        printf("%d\n", i);
    }
    
}