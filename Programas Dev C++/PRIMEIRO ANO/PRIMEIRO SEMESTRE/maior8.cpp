#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	
	int num, num2;
	
	printf("Insira dois numeros: \n");
	scanf("%d %d" ,&num ,&num2);
	
	   if (num2 > num) {
	   	printf("O maior eh: %d\n" ,num2);
	   	
	   } else {
	   	printf("O maior eh: %d\n" ,num);
	   }
}
