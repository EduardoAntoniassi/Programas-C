#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

double acrescimo(double valorant, double valorat, double *porcent){
	
	double x;
	x = (100 * valorat) / valorant;
	
	*porcent = x - 100;
	return *porcent;
}

int main(){
	double valorant, valorat, porcent;
	
	printf("Insira o valor anterior:\n");
	scanf("%lf" ,&valorant);
	
	printf("Insira o valor atual:\n");
	scanf("%lf" ,&valorat);
	
	printf("O percentual de acrescimo eh de: %.2lf\n" ,acrescimo(valorant, valorat, &porcent));
	
}

