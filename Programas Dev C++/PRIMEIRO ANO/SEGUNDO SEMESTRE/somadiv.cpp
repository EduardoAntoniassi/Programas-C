#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int soma_div(int n1, int *soma = 0){
	
	for(int i = 1; i <= n1; i++){
		
		if(n1 % i == 0){
			
			*soma = i + *soma;
			
		}
	}
	return *soma;
}

int main(){
	
	int n1;
	int soma = 0;
	
	printf("Insira o nimero desejado:\n");
	scanf("%d" ,&n1);
	
	printf("A soma dos divisores eh: %d\n" ,soma_div(n1, &soma));
}
