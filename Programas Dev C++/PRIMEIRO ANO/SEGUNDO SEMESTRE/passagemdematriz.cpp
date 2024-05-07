#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

void incrementa_vetor(int tamanho_do_vetor, int vetor[]){

    for(int i = 0; i < tamanho_do_vetor; i++){
	
     vetor[i] = vetor[i] + 1;

    }
}

int main(){
	
    int vetor[10], indice;

    for(indice = 0; indice < 10; indice++){
    	
    	vetor[indice] = indice;

	}
	
    incrementa_vetor(10, vetor); // Chamada da Função
    printf("\n Vetor atualizado \n");

    for(indice = 0; indice < 10; indice++){
    	
      printf("%d ", vetor[indice]);
      
	}
    
	return 0;
}
