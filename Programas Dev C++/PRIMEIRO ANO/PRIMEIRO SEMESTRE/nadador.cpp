#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	
	int a;
	
	printf("Informe a idade do nadador: \n" ,a);
	scanf("%d" ,&a);
	
	if (a >= 5 && a <= 7) {
		printf("Infantil A");
		
	} else if (a >= 8 && a <= 10) {
		printf("Infantil B");
		
    } else if (a >= 11 && a <= 13) {
    	printf("Juvenil A");
    	
	} else if (a >= 14 && a <= 17) {
		printf("Juvenil B");
		
	} else if (a >= 18) {
		printf("Senior");
		
	} else {
		printf("Nao classificado");
	
	}
		
}
