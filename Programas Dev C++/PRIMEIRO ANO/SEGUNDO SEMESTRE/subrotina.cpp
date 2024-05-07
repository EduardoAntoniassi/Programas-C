#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void maior(int a, int b) {
   
	
   if (a > b) {
   	 printf("%d eh o maior\n" ,a);
   	 
   } else {
   	 printf("%d eh o maior\n" ,b);
   }
   
}

int main() {
	
	int a, b;
	
	printf("Insira o primerio numero: \n");
	scanf("%d" ,& a);
	
	printf("Insira o segundo numero: \n");
	scanf("%d" ,& b);
	
	maior(a, b);
	
	return 0;
}

