#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int km;
	int minutos;
	
	scanf("%d" ,&km);
	
	minutos = (60 * km)/30;
	
	printf("%d minutos" ,minutos);
	
}
