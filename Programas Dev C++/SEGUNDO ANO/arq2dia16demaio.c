#include <stdio.h>
#include <stdlib.h>

int main(){

    //Aluno: Eduardo Lourenço Antoniassi;

    int *v;
    int n;

    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &n);

    v = malloc(n * sizeof(int));

    printf("-------------------------------------------\n");
    printf("Inserção de valores\n");

    for(int i = 0; i < n; i++){
        printf("%d\n"), v[i];

    }
    return 0;

}
