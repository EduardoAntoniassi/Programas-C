#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void subs(int num[], int tam){
	
	for(int i = 0; i < tam; i++){
		
		if(num[i] < 0) {
		   num[i] = 0;
		   
		}
	}
}

int main() {
	
	int num[25];
	
	for (int i = 0; i < 25; i++) {
		
		scanf("%d" ,&num[i]);
	}
	
	subs(num, 25);
	
	for (int i = 0; i < 25; i++) {
		
		printf("%d" ,&num[i]);
	}
	
	return 0;
	
}

