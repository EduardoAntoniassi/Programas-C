#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	
	int a, b;
	float cq, bs, bu, xs, xb, rf;
	
	printf("Insira o codigo do produto \n" ,a);
	scanf("%d" ,&a);
	
	printf("Insira a quantidade desejada \n" ,b);
	scanf("%d" ,&b);
	
	if (a = 100) {
		cq = b * 7.50;
		printf("O valor final eh: %.2f\n" ,cq);
		
	} else if (a = 101) {
		bs = b * 5.50;
		printf("O valor final eh: %.2f\n" ,bs);
	
    } else if (a = 103) {
    	bu = b * 10.50;
    	printf("O valor final eh: %.2f\n" ,bu);
    	
    } else if (a = 104) {
    	xs = b * 11.00;
    	printf("O valor final eh: %.2f\n" ,xs);
    	
    } else if (a = 105) {
    	xb = b * 13.50;
    	printf("O valor final eh: %.2f\n" ,xb);
    	
	} else if (a = 106) {
		rf = b * 3.50;
		printf("O valor final eh: %.2f\n" ,rf);
	
	} else {
		printf("Prouto nao encontrado");
	}
}
