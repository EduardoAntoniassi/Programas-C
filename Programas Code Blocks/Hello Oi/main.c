#include <stdio.h>
#include <stdlib.h>

int main() {

    int value1, value2, soma;

    printf("Insira o primeiro valor\n");
    scanf("%d" ,&value1);

    printf("Insira o segundo valor\n");
    scanf("%d" ,&value2);

    soma = value1 + value2;

    printf("Soma: %d\n" ,soma);

    return 0;
}
