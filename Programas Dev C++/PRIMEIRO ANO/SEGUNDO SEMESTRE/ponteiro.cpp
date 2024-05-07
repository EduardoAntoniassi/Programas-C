#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main() {
	
	int a; 
	float b;
	char c[5];
	
	int *in;
	float *re;
	char *ch;
	
	printf("Digite o valor inteiro:\n");
	scanf("%d" ,&a);
	
	printf("Digite o valor real:\n");
	scanf("%f" ,&b);
	
	printf("Digite a letra escolhida:\n"); 
	scanf("%s" ,&c);
	
	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	printf("O valor inteiro era: %d\n" ,a);
	
	in = &a;	
	*in = 2;
	printf("O valor inteiro se tornou: %d\n" ,a);
	
	printf("O valor real era: %.2f\n" ,b);
	
	re = &b;
	*re = 5.50;
	printf("O valor real se tornou: %.2f\n" ,b);
	
	printf("A palavra era: %s\n" ,c);
	
	ch = &c[0];
	*ch = 'B';
	printf("A letra se tornou: %s\n" ,c);
	
}






















