#include <stdlib.h>
#include <stdio.h>
#include "calc.h"

int main(){
	
	//Aluno: Eduardo Lourenço Antoniassi;
    Calculadora *calc = criarCalculadora();
    
    if(calc != NULL){
    	
    somar(calc, 5);
    multiplicar(calc, 3);
    subtrair(calc, 2);

    imprimirResultado(calc);
    destruirCalculadora(calc);
    }

    return 0;
    
}
