#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {

    char name[100];
    char number[15];
    int code[4];
    
    printf("Hello Moto\n");
	printf("Let me know your name Moto\n");
	gets(name);
	
    printf("Let me know your nuber Moto\n");
    scanf("%s" ,&number);

    printf("Put your code Moto\n");
    
	for(int i = 0; i < 4; i++) {
     
		scanf("%d" ,&code[i]);
     	
	}
     
     if(code[0] == 2 && code[1] == 5 && code[2] == 0 && code[3] == 8) {
		 
    printf("Your code moto\n");
    
    for(int i = 0; i < 4; i++){
    	
		printf("%d" ,code[i]);
    	
	}
	
	printf("\nYour Moto");
	
    } else {
		
		printf("Not your Moto\n");
		
	}
	
}

