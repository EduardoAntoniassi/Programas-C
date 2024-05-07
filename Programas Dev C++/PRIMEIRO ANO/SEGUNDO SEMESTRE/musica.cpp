#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main() {
	
	char musica[100];
	char letra;
	
	printf("Insira o nome da musica: \n");
	gets(musica);
	
	printf("Insira o caractere: \n");
	scanf("%s" ,&letra);
	
	for(int i = 0; i < strlen(musica); i++) {
	char c = musica[i];
	
		if (c == letra) {
		printf("Ocorrencia de caractere na posição %d\n" ,i);
		
	}
    }
}
