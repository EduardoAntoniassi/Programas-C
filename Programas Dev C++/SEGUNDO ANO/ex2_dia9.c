
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Aluno: Eduardo Louren�o Antoniassi;
	
	int a, b; // cria as variaveis 
	a = 10, b = 20; // declara um valor inteiro as variavies
	
	int *p, *q; // cria os ponteiros
	
	p = &a; // p recebe o endere�o de a
	q = &b; // q recebe o endere�o de b
	
	 *p = 30; // altera a variavel pelo endere�o de a
	 *q = 40; // altera a variavel pelo endere�o de b
	
	printf("%p %d\n", &a, a);
	printf("%p %d\n", &b, b);
	printf("%p %p %d\n", &p, p, *p);
	printf("%p %q %d\n", &q, q, *q);
	
	printf("----------------------------------------------------------\n");
	printf("\n");
	printf("\n");
}
