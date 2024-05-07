#include <stdio.h>

int main(){
    //Aluno: Eduardo Lourenço Antoniassi

    float vteste;
    printf("Tipos bytes\n");
    printf("int ------------ %d bytes\n", sizeof(int));
    printf("char ----------- %d bytes\n", sizeof(char));
    printf("long ----------- %d bytes\n", sizeof(long));
    printf("short ---------- %d bytes\n", sizeof(short));
    printf("float ---------- %d bytes\n", sizeof(float));
    printf("double --------- %d bytes\n", sizeof(double));
    printf("long double ---- %d bytes\n", sizeof(long double));
    printf("O tamanho de vteste Ã©: %d bytes\n", sizeof(vteste));
    
    return 0;
}
