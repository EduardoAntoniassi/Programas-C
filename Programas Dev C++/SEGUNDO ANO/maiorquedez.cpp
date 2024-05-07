#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	//Aluno: Eduardo Lourenço Antoniassi;
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	printf("Digite o número desejado\n");
	scanf("%d" ,&num);

	if(num > 10){
		printf("O número é maior que 10\n");
		
	} else if (num < 10){
		printf("O nuúmero é menor que 10\n");
		
	} else if (num ==10){
		printf("Parabéns! Você acertou o número 10\n");
		
	}
	
}
