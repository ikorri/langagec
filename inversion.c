#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    printf("Entrez un nombre : ");
    scanf("%d", &num);

    while(num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    printf("Le nombre inversé est : %d\n", reverse);

    return 0;
}
