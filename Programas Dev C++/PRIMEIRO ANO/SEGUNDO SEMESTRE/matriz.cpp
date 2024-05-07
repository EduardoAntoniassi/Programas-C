#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main() {

int m [3] [3];
    for (int i = 0; i < 3; i++) {
    	
    	for (int j = 0; j < 3; j++) {
		  
		  scanf("%d" ,& m [i] [j]);
		  
		  int maiorvalor = 0;
		    if (m[i][j] > maiorvalor) {
                maiorvalor = m [i][j];
                
            }
		}
		
	}
	
	for (int i = 0; i < 3; i++) {
    	
    	for (int j = 0; j < 3; j++) {
		  
		  printf("%d\n" ,m [i] [j]);
		  
		}
		 
		 0printf("%d\n" ,maiorvalor);
		
	}
}
