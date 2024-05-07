#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main() {
	
	char palavra[100];
	char palavra2[100];
	char aux[100];
	
	
	printf("Insira a palavra: \n");
	gets(palavra);
	strcpy(aux, palavra);
	strcpy(palavra2, strrev(palavra));
	
	if(stricmp(aux, palavra2) == 0){
		printf("Palindromo\n");
		
	} else {
		printf("Nao Palindromo\n");
		
	}
	printf(palavra);
	printf(palavra2);
}

