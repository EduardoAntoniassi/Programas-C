#include <stdio.h>
#include <stdlib.h>

int main() {

   int n, x;
   
   for (int i = 0; i < n; i++) {
           
           scanf("%d" ,&n);

           
            if (x > 0 && x % 2 == 0) {
               printf("EVEN POSITIVE");
               
           } else if (x < 0 && x % 2 == 0) {
               printf("EVEN NEGATIVE");
               
           } else if (x > 0 && x % 2 != 0) {
               printf("ODD POSITIVE");
           
           } else if (x < 0 && x % 2 != 0) {
               printf("ODD NEGATIVE");
               
           } else {
           	
           	printf("NULL");
		   }
           
       }
}
