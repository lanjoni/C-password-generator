#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i, password, length;

    srand((unsigned int) time(NULL));
    printf("Digite o tamanho da senha (por favor, escolha maior ou igual à 6): ");
    scanf("%d", &length);

    if (length >= 6){
        for (i=0; i <= length; i++){
            int c = rand()%128;

            if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 35 && c <= 37) || c == 64){
                printf("%c", c);
            } else {
                i--;
            }
        } 
        printf("\n");
    } else {
        printf("O valor digitado para tamanho é menor que 6!\n");
    }

    return(0);
}