#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

	void fator(int num) {
		
		int i;
		for(i = 1; num > 1; num = num - 1){
			i =  i * num;
		}
		
		printf("O fatorial desse numero e: %d ", i);
	}
	int main() {
	
		int num;
		
		printf("Digite o numero que sera fatorado: \n");
		scanf("%d", &num);
		
		fator(num);
		return 0;
	
	}

