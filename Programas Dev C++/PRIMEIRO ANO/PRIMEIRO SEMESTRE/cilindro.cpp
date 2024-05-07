#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	
	float h, r, A, pi;
	int Q, C;
	
	printf("Insira a altura do clilindro: \n" ,h);
	scanf("%f" ,&h);
	
	printf("Insira o raio do cilindro: \n" ,r);
	scanf("%f" ,&r);
	
	pi = 3.14;
	A = (pi * (r * r)) + (2 * pi * r * h);
	C = (50 * A)/ 3;
	
       printf("O custo necessario eh: %.d\n" ,C);
	
	Q = C / 50;
	ceil(Q);

	   printf("A quantidade de latas necessarias eh: %d \n" ,Q);
	
}
