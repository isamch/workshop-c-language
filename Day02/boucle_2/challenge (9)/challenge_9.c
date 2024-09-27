#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//  Challenge 9 : Calcul de la Puissance :


int main() {
   
    int i = 0, nbr, puissance = 1, exposant;

    printf("Entrez votre number : ");
    scanf("%d", &nbr);

    printf("Entrez l'exposant : ");
    scanf("%d", &exposant);


   
    while (i < exposant)
    {

        puissance = puissance * nbr;

        i++;
    }
    
    printf("la puissance : %d", puissance);


    return 0;
}