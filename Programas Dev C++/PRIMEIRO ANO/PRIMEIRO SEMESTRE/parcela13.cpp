#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main() {
	
	float price, par12, pri12, par24, pri24, par48, pri48, par60, pri60, avist, privist;
	
	printf("Insira o valor do carro: \n");
	scanf("%f" ,&price);
	
	par12 = price * 0.06;
	pri12 = price + par12;
	
	par24 = price * 0.12;
	pri24 = price + par24;
	
	par48 = price * 0.24;
	pri48 = price + par48;
	
	par60 = price * 0.30;
	pri60 = price + par60;
	
	avist = price * 0.05;
	privist = price - avist;
	
	printf("********************* TABELA DE PARCELAS EM MESES *********************\n");
	printf("-----------------------------------------------------------------------\n");
	printf("| A vista |    Preco final: %.2f    |           Desconto: %.2f   \n" ,privist ,avist);
	printf("|   12    |    Preco final: %.2f    |   Valor da parcela: %.2f   \n" ,pri12 ,(par12/12));
	printf("|   24    |    Preco final: %.2f    |   Valor da parcela: %.2f   \n" ,pri24 ,par24/24);
	printf("|   48    |    Preco final: %.2f    |   Valor da parcela: %.2f   \n" ,pri48 ,par48/48);
	printf("|   60    |    Preco final: %.2f    |   Valor da parcela: %.2f   \n" ,pri60 ,par60/60);
	printf("-----------------------------------------------------------------------\n");
	printf("***********************************************************************\n");
	
}

