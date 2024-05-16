#include <stdio.h>
#include <stdlib.h>

int main(){

    //Aluno: Eduardo Lourenço Antoniassi;

    int arr[] = {10,20,30,40,50};
    arr[2] = 100;
    char arrs[] = {'G', 'e', 'e', 'k', 's', '\0'};

    printf("---Elementos do array imprimindo:---\n");
    for(int i = 0; i < 5; i++){
        printf("%d\n", arr[i]);

    }
    printf("------------------------------------\n");
    int y = 0;

    while (arrs[y]){
        printf("%c\n", arrs[y++]);

    }
    printf("------------------------------------\n");
    return 0;

}
