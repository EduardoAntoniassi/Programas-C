#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	
	int c, farenheit;
	
	printf("Insira o valor em Celsius: \n" ,c);
	scanf("%d" ,&c);
	
	farenheit = (1.8 * c) + 32;
	
	printf("O valor em Farenheit e: %d\n" ,farenheit);
}
