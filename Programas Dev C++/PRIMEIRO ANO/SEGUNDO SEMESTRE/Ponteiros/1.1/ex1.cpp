#include <stdio.h>

void verifica_maior_valor(int *num1, int *num2){
    int maior = 0, menor = 0;
    if(*num1 >= *num2){
        maior = *num1;
        menor = *num2;
    }else{
        maior = *num2;
        menor = *num1;
    }

    *num1 = maior;
    *num2 = menor;
}

int main(){
    int num1, num2;

    printf("Digite um valor: ");
    scanf("%d", &num1);

    printf("Digite um valor: ");
    scanf("%d", &num2);

    printf("Valores iniciados: %d e %d\n", num1, num2);
    
    verifica_maior_valor(&num1, &num2);
    
    printf("Maior valor: %d e menor valor: %d\n", num1, num2);
}
