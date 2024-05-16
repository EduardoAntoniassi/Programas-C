#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	//Aluno: Eduardo Lourenço Antoniassi;
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	printf("Digite sua idade: ");
	scanf("%d" ,&idade);
	
	if(idade > 50){
		printf("Você é velho\n");
		
	} else {
		printf("Você é novo\n");
		
	}
}
