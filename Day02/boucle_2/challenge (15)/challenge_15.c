#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Challenge 15 : Calcul de la Factorielle :

int main(){
    int i, nbr;

    do
    {
        printf("Entrez votre nbr : ");
        scanf("%d", &nbr);
    } while ( nbr <= 0);
    

    for ( i = nbr-1 ; i > 0 ; i--)
    {
        

        nbr = nbr * i;

    }
    
    printf("factoriel : %d \n", nbr);


    return 0;
}