#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main() {
	
	char frase[100];
	
	printf("Insira a frase: \n");
	gets(frase);
	
	for(int j = 0; j < strlen(frase); j++) {
	char c = frase[j];
	
		if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
		
		    frase[j] = '*';
		
	    }
    }
    printf("Mensagem Criptografada: %s\n" ,frase);

}
