#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void strcpy(char nome1[100], char nome2[100], char nome3[100]) {
	
	printf("STRING STRCPY (STRNCPY - ACRESCENTAR O NUMERO DE CARACTERES PÓS CADEIA DE CARACTERES)\n");
	
	strcpy(nome1, nome3);
	printf(" %s\n %s\n %s\n" ,nome1 ,nome2 ,nome3);
	
}

void strcat(char nome1[100], char nome2[100], char nome3[100]) {
	
	printf("STRING STRCAT (STRNCAT - ACRESCENTAR O NUMERO DE CARACTERES PÓS CADEIA DE CARACTERES)\n");
	
	strcat(nome1, nome2);
	printf(" %s\n %s\n %s\n" ,nome1 ,nome2 ,nome3);
	
}

void strcmp(char nome1[100], char nome2[100], char nome3[100]) {
	
    printf("STRING STRCMP (STRNCMP - ACRESCENTAR O NUMERO DE CARACTERES PÓS CADEIA DE CARACTERES) - OBS: CONSIDERA QUE MAIUSCULO E MINUSCULO SÃO DIFERENTES\n");
	              printf("(STRICMP - CONSIDERA QUE MAIUSCULO E MINUSCULO SAO IGUAIS)\n");
				          
	int compare = strcmp(nome1, nome2);
	
    if(compare == 0){
    	printf("\nTudo igual chefe\n");
    	
	} else if (compare < 0){
		printf("\nMano se pa a primeira vem antes da segunda\n");
		
	} else if (compare > 0){
		printf("\nMano se pa a segunda vem antes da primeira\n");
		
	}
	
}

void strset(char nome1[100], char nome2[100], char nome3[100]){

    printf("STRING STRSET (STRNSET - ACRESCENTAR O NUMERO DE CARACTERES PÓS CADEIA DE CARACTERES)\n");
    
    printf("%s" ,strnset(nome1, 'x', 5));
    
}

void strrev(char nome1[100], char nome2[100], char nome3[100]){

    printf("STRING STRREV\n");
    
    printf("%s" ,strrev(nome1));
    
}

void toupper(char nome1[100], char nome2[100], char nome3[100]){

    printf("STRING TOUPPER\n");
    
    nome1[5] = toupper(nome1[5]);
    printf("%s" ,nome1);
    
}

void strupr(char nome1[100], char nome2[100], char nome3[100]){

    printf("STRING STRUPR\n");
    
    printf("%s" ,strupr(nome1));
    
}

void tolower(char nome1[100], char nome2[100], char nome3[100]){

    printf("STRING TOLOWER\n");
    
    nome1[5] = tolower(nome1[5]);
    printf("%s" ,nome1);
    
}

void strlwr(char nome1[100], char nome2[100], char nome3[100]){

    printf("STRING STRLWR\n");
     
    printf("%s" ,strlwr(nome1));
    
}

void strlen(char nome1[100], char nome2[100], char nome3[100]){

    printf("STRING STRLEN\n");
    
    int tamanho = strlen(nome1);
    printf("%d" ,tamanho);  
    
}

int main() {
	
	char nome1[100];
	char nome2[100];
	char nome3[100];
	
	printf("Nome 1: \n");
	gets(nome1);
	
	printf("Nome 2: \n");
	gets(nome2);
	
	printf("Nome 3: \n");
    gets(nome3);
    
    //strcpy(nome1, nome2, nome3);
    
    //strcat(nome1, nome2, nome3);
    
    //strcmp(nome1, nome2, nome3);
    
    //strset(nome1, nome2, nome3);
    
    //strrev(nome1, nome2, nome3);
    
    //toupper(nome1, nome2, nome3);
    
    //strupr(nome1, nome2, nome3);
    
    //tolower(nome1, nome2, nome3);
    
    //strlwr(nome1, nome2, nome3);
    
    //strlen(nome1, nome2, nome3);
    
    return 0;
}
