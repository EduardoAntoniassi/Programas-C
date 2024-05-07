#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	
	float a, b, c, del, bask, bask2;
	
	printf("Insira o valor de A: \n" ,a);
	scanf("%f" ,&a);
	
	printf("Insira o valor de B: \n" ,b);
	scanf("%f" ,&b);
	
	printf("Insira o valor de C: \n" ,c);
	scanf("%f" ,&c);
	
	del = (b * b) - (4 * a * c);
	
	bask = (-b + (sqrt (del))) / (2 * a);
	bask2 = (-b - (sqrt (del))) / (2 * a);
	
	if (del > 0) {
		printf("Raiz 1 = %.2f\n" ,bask);
		printf("Raiz 2 = %.2f\n" ,bask2);
	
	} else if (del == 0) {
		printf("Raiz = %.2f\n" ,bask);
		
	} else if (del < 0) {
		printf("Essa equacao nao possui raizes reais");
	}
	
}
