#include <stdio.h>

int main() {
    int matriz[3][3];
    int maior = 0;

    // Preencha a matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            // Verifique se o número é o maior até agora
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    // Imprima a matriz
    printf("Matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Imprima o maior número
    printf("O maior número da matriz é: %d\n", maior);

    return 0;
    
}

