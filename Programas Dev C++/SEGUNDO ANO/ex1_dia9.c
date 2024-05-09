#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//Aluno: Eduardo Lourenço Antoniassi;
	
	int val = 25;
	int *ptr;
	ptr = &val;
	
		printf("Conteudo da variavel: %d\n", val);
		printf("Endereço da variavel: %x\n", val);
		printf("Conteudo da variavel ponteiro: %x\n", ptr);
		
	return 0;
}
