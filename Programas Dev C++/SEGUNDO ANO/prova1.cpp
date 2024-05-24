#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Ponto {
int x;
int y;
};

void prova(struct Ponto *p) { 
p -> x = 10; 
p -> y = 20; 

} 

int main() { 
struct Ponto p1 = {5, 5};
struct Ponto p2 = p1; 
prova(&p1); 
printf("p1: (%d, %d)\n",p1.x,p1.y);
printf("p2: (%d, %d)\n",p2.x,p2.y);
return 0;

}
