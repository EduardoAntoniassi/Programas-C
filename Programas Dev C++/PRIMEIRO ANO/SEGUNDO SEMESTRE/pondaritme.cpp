#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

double media (double n1, double n2, double n3, char letra, double *mediareal) {
	
	if (letra == 'A'){
		
		*mediareal = (n1 + n2 + n3)/3;
		
		return *mediareal; 
		
		} else if (letra == 'P'){
		 
		 *mediareal = ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
		
		 return *mediareal;
		 	
		}
}

int main () {
	
	char letra;
	double n1, n2, n3;
	double mediareal;
	
	printf("Digite a nota 1: \n");
	scanf("%lf" ,&n1);
	
	
	printf("Digite a nota 2: \n");
	scanf("%lf" ,&n2);
	
	
	printf("Digite a nota 3: \n");
	scanf("%lf" ,&n3);
	
	fflush(stdin);
	
	printf("Digite o tipo de media que deseja: \n");
	printf("A - Media Aritmetica\n");
	printf("P - Media Ponderada\n");
	scanf("%c" ,&letra);
	
	mediareal = media(n1, n2, n3, letra, &mediareal);
	printf("A media eh: %.2lf\n" ,mediareal);
	
}


