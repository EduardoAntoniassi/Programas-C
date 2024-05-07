#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	
	float nota1, nota2, nota3, media, peso1, peso2, peso3;
	
	printf("Insira a primeira nota: \n" ,nota1);
	scanf("%f" ,&nota1);

        printf("Insira o peso da primeira nota: \n" ,peso1);
        scanf("%f" ,&peso1);
	
	printf("Insira a segunda nota: \n" ,nota2);
	scanf("%f" ,&nota2);
 
        printf("Insira o peso da segunda nota: \n" ,peso2);
        scanf("%f" ,&peso2);
	
	printf("Insira a terceira nota: \n" ,nota3);
	scanf("%f" ,&nota3);

        printf("Insira o peso da terceira nota: \n" ,peso3);
        scanf("%f" ,&peso3);
	
           media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / 6 ;
           
    printf("A media das notas eh: %.1f" ,media);
    
}
