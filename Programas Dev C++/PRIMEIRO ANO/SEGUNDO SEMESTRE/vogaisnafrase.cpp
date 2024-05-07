#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main() {
    char frase[100];
    int vogais = 0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; i < strlen(frase); i++) {
        char c = frase[i];
        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') {
            vogais++;
        }
    }

    printf("Quantidade de vogais na frase: %d\n", vogais);

    return 0;
    
}
