#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Challenge 14 : Sélection de Sortie :


int main(){
    int i, nbr;
    char *jours[] = {
        "lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", "dimanche"
    };

    do
    {
        printf("Entrez votre nbr (1--7) : ");
        scanf("%d", &nbr);

    } while ( nbr > 7 || nbr < 0);

    printf("\n=====================\n");
    int count = nbr;

    for ( i = 1; i <= 7 ; i++)
    {
        printf("Jour (%d) : %s \n", i, jours[count-1]);

        if ( count == 7 )
        {   
            count = 0; 
        }

        count++;
    }
  

    return 0;
}