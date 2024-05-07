#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	
	float hip, ca, co;
	
	printf("Insira o valor do cateto adjacente: \n" ,ca);
	scanf("%f" ,&ca);
	
	printf("Insira o valor do cateto oposto: \n" ,co);
	scanf("%f" ,&co);
	
	hip = sqrt(pow(ca, 2) + pow(co, 2));
	
	printf("O valor da hipotenusa eh: %.2f\n" ,hip);
	 
}
