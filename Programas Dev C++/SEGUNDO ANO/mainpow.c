#include <stdlib.h>
#include <stdio.h>
#include "pow.h"
#include <math.h>

int main(){
	
	//Aluno: Eduardo Lourenço Antoniassi;
    Expoente *exp = criarExpoente();
    
    if(exp != NULL){
    	
	potencia(exp, 2);
    imprimirResultado(exp);
    destruirExpoente(exp);
    
    cubo(exp, 2);
    imprimirResultado(exp);
    destruirExpoente(exp);
    
    }

    return 0;
    
}
