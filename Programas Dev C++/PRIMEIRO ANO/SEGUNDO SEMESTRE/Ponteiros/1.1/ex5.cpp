#include <stdio.h>

int main() {
    int A;
    int *B, **C, ***D;

    // Atribuir o endereço de A aos ponteiros
    B = &A;
    C = &B;
    D = &C;

    // Solicitar ao usuário para inserir o valor de A
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    // Calcular e exibir o dobro, triplo e quádruplo usando ponteiros
    printf("Dobro: %d\n", (*B) * 2);
    printf("Triplo: %d\n", (*(*C)) * 3);
    printf("Quádruplo: %d\n", (*(*(*D))) * 4);

    return 0;
}
