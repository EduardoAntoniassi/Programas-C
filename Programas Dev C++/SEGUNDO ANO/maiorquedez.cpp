#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	//Aluno: Eduardo Louren�o Antoniassi;
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	printf("Digite o n�mero desejado\n");
	scanf("%d" ,&num);

	if(num > 10){
		printf("O n�mero � maior que 10\n");
		
	} else if (num < 10){
		printf("O nu�mero � menor que 10\n");
		
	} else if (num ==10){
		printf("Parab�ns! Voc� acertou o n�mero 10\n");
		
	}
	
}
