#include <stdio.h>
#include <stdlib.h>

int main(){
    int linhas, colunas;
    int **matriz;

    printf("Digite a quantidade de linhas de uma matriz: ");
    scanf("%d", &linhas);

    printf("Digite a quantidade de colunas de uma matriz: ");
    scanf("%d", &colunas);

    matriz = (int**) malloc(linhas*sizeof(int*));

    for(int i = 0; i < linhas; i++){
        matriz[i] = (int*) malloc(colunas * sizeof(int)); 
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Digite um elemento da matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
    
    free(matriz);
}
