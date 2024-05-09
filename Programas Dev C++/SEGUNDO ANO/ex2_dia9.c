
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Aluno: Eduardo Lourenço Antoniassi;
	
	int a, b; // cria as variaveis 
	a = 10, b = 20; // declara um valor inteiro as variavies
	
	int *p, *q; // cria os ponteiros
	
	p = &a; // p recebe o endereço de a
	q = &b; // q recebe o endereço de b
	
	 *p = 30; // altera a variavel pelo endereço de a
	 *q = 40; // altera a variavel pelo endereço de b
	
	printf("%p %d\n", &a, a);
	printf("%p %d\n", &b, b);
	printf("%p %p %d\n", &p, p, *p);
	printf("%p %q %d\n", &q, q, *q);
	
	printf("----------------------------------------------------------\n");
	printf("\n");
	printf("\n");
}
