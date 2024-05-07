#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	
	int a, b;
	
	printf("Numero da primeira mao: \n" ,a);
	scanf("%d" ,&a);
	
	printf("Numero da segunda mao: \n" ,b);
	scanf("%d" ,&b);
	
	if ((a + b) % 2 == 0) {
		printf("o resultado eh par");
		
	} else {
		printf("o resultado eh impar");
	}
}
