#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	
	float a, b, media;
	int c;
	
	printf("Insira a primeira nota: \n" ,a);
	scanf("%f" ,&a);
	
	printf("Insira a segunda nota: \n" ,b);
	scanf("%f" ,&b);
	
	printf("Insira o percentual de frequencia: \n" ,c);
	scanf("%d" ,&c);
	
	media = (a + b) / 2;
	
	if (c > 100){
		printf("frequencia invalida");
		
	} else if (c < 0){
		printf("frequencia inalida");
	
	} else if (media >= 7.0 && c >= 75) {
		printf("Aluno aprovado");
	
	}  else {
		printf("Aluno nao aprovado");
	}

	
}
