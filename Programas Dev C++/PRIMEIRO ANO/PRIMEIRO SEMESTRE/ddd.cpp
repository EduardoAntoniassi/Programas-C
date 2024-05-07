#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	
	int a;
	
	printf("Insira o DDD: \n" ,a);
	scanf("%d" ,&a);
	
	if (a == 61) {
		printf("O DDD %d pertence a Brasilia" ,a);
	
	} else if (a == 71) {
		printf("O DDD %d pertence a Salvador" ,a);

	} else if (a == 11) {
		printf("O DDD %d pertence a Sao Paulo" ,a);
		
	} else if (a == 21) {
		printf("O DDD %d pertence a Rio de Janeiro" ,a);
		
	} else if (a == 32) {
		printf("O DDD %d pertence a Juiz de Fora" ,a);
		
	} else if (a == 19) {
		printf("O DDD %d pertence a Campinas" ,a);
		
	} else if (a == 27) {
		printf("O DDD %d pertence a Vitoria" ,a);
		
	} else if (a == 31) {
		printf("O DDD %d pertence a Belo Horizonte" ,a);
		
	} else {
		printf("DDD nao cadastrado" ,a);
	} 
}
