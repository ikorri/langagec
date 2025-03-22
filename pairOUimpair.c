#include<stdio.h>

int main(){
    int nb1 = 0;
    printf("Saisir un nombre: ");
    scanf("%d",&nb1);

    if (nb1%2 == 0){
        printf("Le nombre est pair");
    } else {
        printf("Le nombre est impair");
    }

    return 0;
}