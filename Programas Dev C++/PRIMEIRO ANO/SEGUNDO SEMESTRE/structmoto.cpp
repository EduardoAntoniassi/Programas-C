#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct usuario {
    	
    	char nome[100];
        char number[15];
        int passworld[4];
        
	  };
	
	typedef struct usuario usuario;
	
int main() {

    usuario usr;
    
    printf("Hello Moto\n");
    printf("Let me know your name Moto?\n");
    gets(usr.nome);
    
    printf("Let me know your number Moto?\n");
    scanf("%s" ,&usr.number);
    
    printf("Put your passworld Moto:\n");
    
    for(int i = 0; i < 4; i++){
    	
    	scanf("%d" ,&usr.passworld[i]);
    	
	}
	
	if(usr.passworld[0] == 2 && usr.passworld[1] == 5 && usr.passworld[2] == 0 && usr.passworld[3] == 8){
		
		printf("Your code Moto:\n");
		
		for(int i = 0; i < 4; i++){
			printf("%d" ,usr.passworld[i]);
			
		}
		
		printf("\nYour Moto\n");
		
	} else {
		printf("Not your Moto... Fuck you bandit\n");
		
	}
}


