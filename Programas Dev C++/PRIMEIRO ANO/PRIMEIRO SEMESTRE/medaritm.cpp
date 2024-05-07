#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	
	float nota1, nota2, nota3, media, exame;
	
    printf("Insira as notas: \n");
    scanf("%f %f %f" ,&nota1 ,&nota2 ,&nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    if (media < 3.0) {
    	printf("Reprovado!");
    	
	} else if (media >= 3.0 && media < 7) {
		printf("Exame\n");
		exame = 7.0 - media;
		printf("Nota necessaria para o exame: %.1f\n" ,exame);
		
	} else if (media >= 7.0) {
		printf("Aprovado!");
	
	}
    
}
