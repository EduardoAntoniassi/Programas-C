#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main() {
	
	printf("---------------------------------------------   MANUAL DA STRING MODERNA   ---------------------------------------------\n");

	char nome1[100];
	char nome2[100];
	char nome3[100];
	
	printf("Nome 1: \n");
	gets(nome1);
	
	printf("Nome 2: \n");
	gets(nome2);
	
	printf("Nome 3: \n");
    gets(nome3);
    
    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
	printf("STRING STRCPY (STRNCPY - ACRESCENTAR O NUMERO DE CARACTERES PÓS CADEIA DE CARACTERES)\n");
	
	//strcpy(nome1, nome3);
	//printf(" %s\n %s\n %s\n" ,nome1 ,nome2 ,nome3);
	
	//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	printf("STRING STRCAT (STRNCAT - ACRESCENTAR O NUMERO DE CARACTERES PÓS CADEIA DE CARACTERES)\n");
	
	//strncat(nome1, nome2);
	//printf(" %s\n %s\n %s\n" ,nome1 ,nome2 ,nome3);
	
	//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	printf("STRING STRCMP (STRNCMP - ACRESCENTAR O NUMERO DE CARACTERES PÓS CADEIA DE CARACTERES) - OBS: CONSIDERA QUE MAIUSCULO E MINUSCULO SÃO DIFERENTES\n");
	//              (STRICMP - CONSIDERA QUE MAIUSCULO E MINUSCULO SAO IGUAIS)
				          
	//int compare = strcmp(nome1, nome2);
	
    //if(compare == 0){
    	//printf("Tudo igual chefe");
    	
	//} else if (compare < 0){
		//printf("Mano se pa a primeira vem antes da segunda\n");
		
	//} else if (compare > 0){
		//printf("Mano se pa a segunda vem antes da primeira\n");
		
	//}
	
	//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	printf("STRING STRSET (STRNSET - ACRESCENTAR O NUMERO DE CARACTERES PÓS CADEIA DE CARACTERES)\n");
    
    //printf("%s" ,strset(nome1, 'x'));
    
	//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    printf("STRING STRREV\n");
    
    //printf("%s" ,strrev(nome1));
    
	//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    printf("STRING TOUPPER\n");
    
    //nome1[5] = toupper(nome1[5]);
    //printf("%s" ,nome1);
    
	//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    printf("STRING STRUPR\n");
    
    //printf("%s" ,strupr(nome1));
    
    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    printf("STRING TOLOWER\n");
    
    //nome1[5] = tolower(nome1[5]);
    //printf("%s" ,nome1);
    
    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    printf("STRING STRLWR\n");
     
    //printf("%s" ,strlwr(nome1));
    
    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    printf("STRING STRLEN\n");
    
    //int tamanho = strlen(nome1);
    //printf("%d" ,tamanho);
    
    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    return 0;
    
}





