#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	
	float nota1, nota2, nota3, media;
	
	printf("Insira a primeira nota: \n" ,nota1);
	scanf("%f" ,&nota1);
	
	printf("Insira a segunda nota: \n" ,nota2);
	scanf("%f" ,&nota2);
	
	printf("Insira a terceira nota: \n" ,nota3);
	scanf("%f" ,&nota3);
	
           media = ((nota1 * 1) + (nota2 * 2) + (nota3 * 3)) / 6;
           
    printf("A media das notas eh: %.1f" ,media);
    
}
