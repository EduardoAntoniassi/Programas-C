#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Aluno Eduardo Lourenço Antoniassi;

typedef struct{
	
	char nome[40];
	float nota[4];

}ficha_aluno;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	ficha_aluno aluno;
	
	int numalunos;
	
	printf("Quantos alunos deseja cadastrar?\n");
	scanf("%d" ,&numalunos);
	setbuf(stdin, NULL);

	
	for(int i = 0; i < numalunos; i++){
		
	printf("----- Cadastro do %dº Aluno -----\n" ,i + 1);
	
	printf("Insira o nome: \n");
	gets(aluno.nome);
	
	for(int j = 0; j < 4; j++){
		printf("Insira a %dª nota: \n", j + 1);
		scanf("%f" ,&aluno.nota[j]);
		
	}
	
	printf("----- Dados do %dº Aluno -----\n", i + 1);
	printf("Nome...... %s\n" ,aluno.nome);
	
	for(int k = 0; k < 4; k++){
	printf("Nota %d..... %.2f\n" ,k + 1 ,aluno.nota[k]);		
	
	}
	printf("\n");
	
	setbuf(stdin, NULL);
	}
	
	return 0;
}

