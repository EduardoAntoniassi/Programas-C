#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int dobro(int num1, int num2){
	
	int resultado;
	
	num1 = num1 * 2;
	num2 = num2 * 2;
	
	resultado = num1 + num2;
	
	return resultado;
	
}

int main() {
	
	int num1, num2, valorsoma;
	
	printf("Insira o primeiro numero:\n");
	scanf("%d" ,&num1);
	
	printf("Insira o segundo numero:\n");
	scanf("%d" ,&num2);
	
	valorsoma = dobro(num1, num2);
	
	printf("Soma:%d\n" ,valorsoma);
	
	return 0;
	
}



