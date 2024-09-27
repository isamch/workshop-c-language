#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Challenge 5 : Fonction de Factorielle :

int Factorielle(int nbr){
    int i;

    for ( i = nbr-1 ; i > 0 ; i--)
    {
            

        nbr = nbr * i;

    }
    return nbr;

}


int main(){
    
    int nbr, factoriel;

    do
    {
        printf("Entrez votre nbr : ");
        scanf("%d", &nbr);
    } while ( nbr <= 0);
    
    factoriel = Factorielle(nbr);
    
    printf("factoriel de %d : %d \n", nbr, factoriel);
    



    return 0;
}