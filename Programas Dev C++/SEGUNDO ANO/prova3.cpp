#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void processaVetor(int *v, int tamanho){
	int i;
	for(i = 0; i < tamanho / 2; i++){
		int temp = v[i];
		v[i] = v[tamanho - i - 1];
		v[tamanho - i - 1] = temp;
		
	}
	for(i = 0; i < tamanho; i++){
		v[i] += i;
		
	}
}

int main(){
	int vetor[6] = {1, 2, 3, 4, 5, 6};
	processaVetor(vetor, 6);
	printf("Elementos do Vetor: \n");
	for(int i = 0; i < 6; i++){
	printf("%d" ,vetor[i]);
			
	}
	printf("\n");
	return 0;
	
}

