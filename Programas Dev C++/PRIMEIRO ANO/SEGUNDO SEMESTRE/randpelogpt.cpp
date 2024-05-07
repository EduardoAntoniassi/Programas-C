#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100; 
    }
}

int verificarNumeroNoVetor(int vetor[], int tamanho, int numero) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            return 1;
        }
    }
    return 0;
}

int main() {
    srand(time(NULL));

    int tamanhoVetor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);

    int vetor[tamanhoVetor];
    preencherVetor(vetor, tamanhoVetor);

    int numeroUsuario;
    printf("Digite um numero para verificar se esta presente no vetor: ");
    scanf("%d", &numeroUsuario);

    int presente = verificarNumeroNoVetor(vetor, tamanhoVetor, numeroUsuario);

    if (presente) {
        printf("O numero %d esta presente no vetor.\n", numeroUsuario);
    } else {
        printf("O numero %d não esta presente no vetor.\n", numeroUsuario);
    }

    return 0;
}
