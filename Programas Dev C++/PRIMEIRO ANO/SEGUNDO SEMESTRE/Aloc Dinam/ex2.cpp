#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int qtd_notas;
    double *notas, media = 0;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &qtd_notas);

    notas = (double*) malloc(qtd_notas*sizeof(double));

    for(int i = 0; i < qtd_notas; i++){
        printf("Digite a %d° nota: ", i+1);
        scanf("%lf", &notas[i]);
        media += notas[i];
    }

    printf("A média do(a) aluno(a) é: %.2lf\n", media / qtd_notas);

    free(notas);
}
