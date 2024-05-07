#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	
	int a, preco;
	
	printf("Insira o preco: \n");
	scanf("%f" ,&preco);
	printf("Insira o codigo: \n" ,a);
	scanf("%d" ,&a);
	
	if (a == 1) {
		printf("O codigo se refere ao Norte");
	
	} else if (a == 2) {
		printf("O codigo se refere ao Nordeste");

	} else if (a == 3) {
		printf("O codigo se refere ao Sudeste");
		
	} else if (a == 4) {
		printf("O codigo se refere ao Sul");
		
	} else if (a == 5) {
		printf("O codigo se refere ao Centro-Oeste");
	} 
}
