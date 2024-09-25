#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// Challenge 12 : Comparaison d'Instants

int main() {

    int heures_1, minutes_1, secondes_1;
    int heures_2, minutes_2, secondes_2;

    printf("Entrez le temps 1 :");
    scanf("%d:%d:%d", &heures_1, &minutes_1, &secondes_1);
    
    printf("Entrez le temps 2 :");
    scanf("%d:%d:%d", &heures_2, &minutes_2, &secondes_2);


    // printf("%d:%d:%d", heures,minutes, secondes);

    if (heures_1 == heures_2)
    {

        if (minutes_1 == minutes_2)
        {
            if (secondes_1 == secondes_2)
            {
                printf("Il s'agit du meme instant.\n");
            }else if (secondes_1 > secondes_2)
            {
                printf("Le deuxieme instant vient avant le premier .\n");
            }else if (secondes_1 < secondes_2)
            {
                printf("Le premier instant vient avant le deuxieme.\n");
            }
            

        }else if (minutes_1 > minutes_2)
        {
            printf("Le deuxieme instant vient avant le premier .\n");    
        }else if (minutes_1 < minutes_2)
        {
            printf("Le premier instant vient avant le deuxieme.\n");
        }
 
        
    }else if (heures_1 > heures_2)
    {
        printf("Le deuxieme instant vient avant le premier .\n");
    }else if (heures_1 < heures_2)
    {
        printf("Le premier instant vient avant le deuxieme.\n");
    }
    
    
    

    return 0;
}
