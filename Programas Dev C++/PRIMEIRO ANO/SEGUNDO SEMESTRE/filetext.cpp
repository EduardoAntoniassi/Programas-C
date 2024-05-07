#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main(){ 
    
	FILE *ponteiro_arquivo;

    ponteiro_arquivo = fopen("Teste.txt", "w");

    if (ponteiro_arquivo == NULL){
      printf("\n Erro na abertura do arquivo \n");
      
    }
}	
