#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
struct professores { //60.50 p/ horaula
	
	int codigo;
	char sexo;
	int horasaula;
	float salario;
	float desconto;
	float neosalario;
	
};
    typedef struct professores Prof;
    
int main() {

    float somadorf = 0;
    float somadorm = 0;
    float divisorf = 0;
    float divisorm = 0;
    float media_aritmeticam = 0;
    float media_aritmeticaf = 0;
    
    Prof professores[10];
    
    for(int i = 0; i < 10; i++){
	
    printf("Insira o codigo: \n");
    scanf("%d" ,& professores[i].codigo);
    fflush (stdin);
    
    printf("Insira o sexo: \n");
    scanf("%c" ,& professores[i].sexo);
    
    printf("Insira as horas aula: \n");
    scanf("%d" ,& professores[i].horasaula);
    printf("\n");

    professores[i].salario = professores[i].horasaula * 60.50;
       
       if (professores[i].horasaula >= 70) {
       professores[i].desconto = professores[i].salario * 0.05;
       
	   } else if (professores[i].horasaula < 70) {
       professores[i].desconto = professores[i].salario * 0.08;
       
	   }
	   
	   professores[i].neosalario = professores[i].salario - professores[i].desconto; 
	   
    }
	   
	   for(int i = 0; i < 10; i++){
	   printf("Codigo: %d\n" ,professores[i].codigo);
	   printf("Salario bruto: %.2f\n" ,professores[i].salario);
	   printf("Desconto: %.2f\n" ,professores[i].desconto);
	   printf("Salario liquido: %.2f\n" ,professores[i].neosalario);
	   printf("\n");
	   }

        // divisor

         for(int i = 0; i < 10; i++) {
               
         if(professores[i].sexo == 'F') {
             divisorf = divisorf + 1;

         }else if(professores[i].sexo == 'M') {
                divisorm = divisorm + 1;
         }
         }
          
        // somador 
 
           for(int i = 0; i < 10; i++) {
           	
                if(professores[i].sexo == 'F') {
                somadorf = somadorf + professores[i].salario;
                media_aritmeticaf = somadorf / divisorf;
 
            } else if(professores[i].sexo == 'M') {
                somadorm = somadorm + professores[i].salario;
                media_aritmeticam = somadorm / divisorm;
            }
            }
            
             if(media_aritmeticam > 0) {
             printf("A media dos salarios dos homens e: %.2f\n" ,media_aritmeticam);
             
            }
            
            if(media_aritmeticaf > 0) {
             printf("A media dos salarios dos homens e: %.2f\n" ,media_aritmeticaf);
             
            }
}

