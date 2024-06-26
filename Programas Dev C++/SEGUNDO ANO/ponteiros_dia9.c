#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Aluno: Eduardo Louren�o Antoniassi
	
	setlocale(LC_ALL, "Portuguese");
	
    int x, *ptrx, **pptrx; //inicializa variavel x, ponteiro e ponteiro de ponteiro
    x = 0;
    
    printf("Valor de x = %d\n",x); // mostra valor de x
    printf("Endere�o de x: %x\n\n",&x); // mostra endere�o da variavel x
    
	ptrx = &x; // declara ptrx como o endere�o de x
    pptrx = &ptrx; // pptrx recebe o endere�o de ptrx
    *ptrx += 10; // valor de ptrx � recebido com soma + 10
    
	printf("O valor de x = %d\n",x); 
    printf("Endere�o apontado por ptrx = %x\n",ptrx);
    printf("Valor de variavel X que esta sendo apontada por ptrx %d\n",*ptrx);
    printf("Endereco de memoria da variavel ptrx: %x\n\n",&ptrx);
    
	**pptrx += 10; // adiciona mais 10 na variavel ptrx que esta apontada para x
    
	printf("Valor de x = %d\n",x);
    printf("Endere�o apontado por **ptrx = %x\n",&pptrx);
    printf("Valor da variavel para a qual pptrx faz referencia = %d\n",**pptrx);
    printf("Endere�o de memoria da variavel **pptrx %x\n",&pptrx);

}
