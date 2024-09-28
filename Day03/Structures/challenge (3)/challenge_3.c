#include <stdio.h>
#include <string.h>
#define MAX_char 50

// Challenge 3 : Passage de Structure en Argument :

typedef struct
{
    float largeur;
    float longeur;

} rectangle;

float rectangle_aire(float largeur, float longeur)
{

    return largeur * longeur;
}

int main()
{

    rectangle rect;
    float air;

    printf("Entrez Largeur : ");
    scanf("%f", &rect.largeur);

    printf("Entrez Longeur : ");
    scanf("%f", &rect.longeur);

    air = rectangle_aire(rect.largeur, rect.longeur);

    // Affichage :

    printf("\n==================\n");

    printf("l'aire de rectangle : %.2f", air);

    return 0;
}
