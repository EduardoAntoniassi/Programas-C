#include "pow.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include "mainpow.c"

	//Aluno: Eduardo Lourenço Antoniassi;
Expoente* criarExpoente() { 
	
	Expoente *exp = (Expoente*)malloc(sizeof(Expoente));
	if(exp!= NULL) {
		exp->resultado = 0;
		
	}
	
	return exp;
}

	
    void destruirExpoente(Expoente* exp) {
		free(exp);
		
	}
	
	void potencia(Expoente* exp, int valor){
	
		exp->resultado = pow(valor, 2);
	
	}
	
	void cubo(Expoente* exp, int valor){
		exp->resultado = valor * valor * valor;
		
	}
	
	void imprimirResultado(const Expoente* exp) {
		printf("Resultado = %d\n" ,exp->resultado);

	}
	
