#include <stdio.h>
#include <locale.h>

int main() {
	
	int num1;
	int num2;
	
	num1 = 44;
	num2 = num1 + 20;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Primeiro n�mero: %i\n" ,num1);
	printf("Segundo numero: %i\n" ,num2);
	
}
