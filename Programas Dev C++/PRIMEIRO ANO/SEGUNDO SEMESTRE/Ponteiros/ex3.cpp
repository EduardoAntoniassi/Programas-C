#include <stdio.h>

int main(){
    int x, y, *pont_x, *pont_y;

    printf("Digite um valor: ");
    scanf("%d", &x);
    printf("Digite um valor: ");
    scanf("%d", &y);

    pont_x = &x;
    pont_y = &y;

    if(&x > &y){
        printf("%d\n", *pont_x);
    }

    else{
        printf("%d\n", *pont_y);
    }
}
