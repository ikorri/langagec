#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int nb1 = rand() % 10 + 1;
    int nb2 = rand() % 10 + 1;
    int somme = 0;
    // printf("La valeur de nb: ");
    // scanf("%d",&nb);
    printf("Le nombre1 = %d\n", nb1);
    printf("Le nombre2 = %d\n", nb2);

    while (1)
    {
        printf("Calculer  %d + %d = ", nb1, nb2);
        scanf("%d", &somme);
        if (nb1 + nb2 == somme)
        {
            printf("Bravo\n");
            break;
        }
        else
        {
            printf("Non\n");
        }
    }

    return 0;
}