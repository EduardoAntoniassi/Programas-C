#include <stdio.h>
#include <time.h>

#define TAMANHO 30

void qtd_maior_numero(int vetor[TAMANHO], int *qtd, int *maior){
    for(int i = 0; i < TAMANHO; i++){
        if(vetor[i] > *maior){
            *maior = vetor[i];
        }
    }

    for(int j = 0; j < TAMANHO; j++){
        if(*maior == vetor[j]){
            (*qtd)++;
        }
    }
}

int main(){
    int vetor[TAMANHO], qtd = 0, maior = 0;
    int segundos = time(0);
    srand(segundos);

    for(int i = 0; i < TAMANHO; i++){
        int numerogrande = rand() % 21;
        vetor[i] = numerogrande;
    }   
    
    for(int i = 0; i < TAMANHO; i++){
        printf("%d\n", vetor[i]);
    }   

    qtd_maior_numero(vetor, &qtd, &maior);

    printf("O maior numero eh: %d e apareceu %d vezes\n", maior, qtd);
}
