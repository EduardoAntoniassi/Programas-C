#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	
	float sal, neosal;
	
	printf("Insira seu salario atual \n" ,sal);
	scanf("%f" ,&sal);
	
	if (sal < 400.01 && sal > 0) {
		neosal = sal + (sal * 0.15);
		printf("Novo salario = %.2f$\n" ,neosal);
		printf("Reajuste de 15 por cento");
	
	} else if (sal < 800.01 && sal > 0) {
		neosal = sal + (sal * 0.12);
		printf("Novo salario = %.2f$\n" ,neosal);
		printf("Reajuste de 12 por cento");
    
	} else if (sal < 1200.01 && sal > 0) {
		neosal = sal + (sal * 0.10);
		printf("Novo salario = %.2f$\n" ,neosal);
		printf("Reajuste de 10 por cento");
		
    } else if (sal < 2000.01 && sal > 0) {
		neosal = sal + (sal * 0.07);
		printf("Novo salario = %.2f$\n" ,neosal);
		printf("Reajuste de 7 por cento");
	
    } else if (sal > 2000 && sal > 0) {
    	neosal = sal + (sal * 0.04);
    	printf("Novo salario = %.2f$\n" ,neosal);
    	printf("Reajuste de 4 por cento");
    	
	} else {
		printf("Valor nao identificado");
	}
}
