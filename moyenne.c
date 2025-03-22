#include <stdio.h>

int main(){

    float moyenne = 0;

    printf("Saisir votre moyenne: ");
    scanf("%f",&moyenne);

    if (moyenne >= 0 && moyenne < 7){
        printf("Insuffisant\n");
    } else if (moyenne >= 7 && moyenne < 10){
        printf("Fragile\n");

    } else if (moyenne >= 10 && moyenne < 12){
        printf("Moyen\n");
        
    }else if (moyenne >= 12 && moyenne <16){
        printf("Très bien\n");

    }else if (moyenne >= 16 && moyenne <= 20){
        printf("Excellent\n");

    }else{ 
        printf("Impossible\n");

    }

    return 0;

}