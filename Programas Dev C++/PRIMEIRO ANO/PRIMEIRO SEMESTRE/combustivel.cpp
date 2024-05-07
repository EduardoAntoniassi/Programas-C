#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() { 

    float l, consumo;
	int km;
    
    printf("Insira a distancia percorrida em Km: \n" ,km);
    scanf("%d" ,&km);
    
    printf("Insira o combustivel gasto em litro: \n" ,l);
    scanf("%f" ,&l);
    
    consumo = km/l;
    
    printf("O consumo medio do automovel eh: %.1fKm/l\n" ,consumo);
}
