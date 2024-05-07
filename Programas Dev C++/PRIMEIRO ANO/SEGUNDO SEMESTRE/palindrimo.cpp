#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main() {
    char palavra[100];
    int i, j, palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    j = strlen(palavra) - 1;

    for (i = 0; i < j; i++, j--) {
        if (palavra[i] != palavra[j]) {
            palindromo = 0;
            
        }
    }

    if (palindromo) {
        printf("Palindromo\n");
    } else {
        printf("Nao palindromo\n");
    }

}
