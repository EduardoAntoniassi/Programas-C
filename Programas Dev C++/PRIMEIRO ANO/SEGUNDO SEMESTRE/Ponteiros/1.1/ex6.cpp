#include <stdio.h>
#include <math.h>
#define PI 3.14

void calc_esfera(float raio, float *area, float *volume){
    *area = 4 * PI * (pow(raio,2));
    *volume = (4 * PI * (pow(raio,3)))/3;
}

int main(){
    float raio;
    float area, volume;

    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("Valor da area: %.2f\n", area);
    printf("Valor da volume: %.2f\n", volume);
}
