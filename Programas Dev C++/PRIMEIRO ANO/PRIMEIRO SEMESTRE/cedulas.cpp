#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main(){
	
	int v;
	
	printf("Insira o valor de dinheiro desejado: \n" ,v);
	scanf("%d" ,&v);
	
	printf("%d \n" ,v);
	printf("%d nota(s) de 100,00 R$ \n" ,v/100);
	v = v % 100;
	
	printf("%d nota(s) de 50,00 R$ \n" ,v/50);
	v = v % 50;
	
	printf("%d nota(s) de 20,00 R$ \n" ,v/20);
	v = v % 20;
	
	printf("%d nota(s) de 10,00 R$ \n" ,v/10);
	v = v % 10;
	
	printf("%d nota(s) de 5,00 R$ \n" ,v/5);
	v = v % 5;
	
	printf("%d nota(s) de 2,00 R$ \n" ,v/2);
	v = v % 2;
	
	printf("%d nota(s) de 1,00 R$ \n" ,v/1);
	v = v % 1;
	
}
