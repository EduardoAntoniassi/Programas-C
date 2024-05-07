#include <stdio.h>
#include <stdlib.h>
#include "retan.h"
#include "mainretan.c"

Retangulo criarRetangulo(float comprimento, float largura){
	
    Retangulo ret;
    ret.comprimento = comprimento;
    ret.largura = largura;
    return ret;
    
}

float calcularArea(Retangulo ret){
	
    return ret.comprimento*ret.largura;
    
}
