#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num, in = 0, out = 0;
	
	scanf("%d" ,&num);
	
	for(int i = 0; i < num; i++) {
		
		int x;
		scanf("%d" ,&x);
		
		if(x >= 10 && x <= 20) {
			
	    in++;
	    }else {

		out++;
	    }
	}
		
	printf("%d in\n" ,in);
	printf("%d out\n" ,out);
		
		
	
}
