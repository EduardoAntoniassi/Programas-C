#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	//Aluno: Eduardo Louren�o Antoniassi;
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	printf("Digite sua idade: ");
	scanf("%d" ,&idade);
	
	if(idade > 50){
		printf("Voc� � velho\n");
		
	} else {
		printf("Voc� � novo\n");
		
	}
}
