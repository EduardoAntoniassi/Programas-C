#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Aluno Eduardo Lourenço Antoniassi;

typedef struct{
	
	int numero;
	char nome[40];
	float nota;
	
}ficha_aluno;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	ficha_aluno aluno;
	
	printf("----- Cadastro de Aluno -----\n");
	printf("Insira o nome\n");
	gets(aluno.nome);
	
	printf("Insira o número\n");
	scanf("%d" ,&aluno.numero);
	
	printf("Insira a nota\n");
	scanf("%f" ,&aluno.nota);
	
	printf("----- Lendo os dados da Struct -----\n");
	printf("Nome...... %s\n" ,aluno.nome);
	printf("Número..... %d\n" ,aluno.numero);
	printf("Nota..... %.2f\n" ,aluno.nota);
	
	return 0;
}

