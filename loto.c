#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialisation de la graine pour les nombres aléatoires
    srand(time(NULL));

    int compteur = 0;
    while (1)
    {
        // Génération des deux nombres aléatoires entre 1 et 10
        int nb1 = rand() % 10 + 1;
        int nb2 = rand() % 10 + 1;

        // Vérification si les deux nombres sont égaux
        if (nb1 == nb2)

        {
            printf("Essai N° %d\n", compteur);
            printf("Le nombre1 = %d\n", nb1);
            printf("Le nombre2 = %d\n", nb2);
            printf("Bravo\n");
            break;
        }
        else
        {
            compteur++;
            printf("Essai N° %d\n", compteur);
            printf("Le nombre1 = %d\n", nb1);
            printf("Le nombre2 = %d\n", nb2);
            printf("Perdu!\n");
        }
    }

    return 0;
}
