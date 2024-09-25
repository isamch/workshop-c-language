#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Challenge 4 : Affichage des N Premiers Nombres Impairs


int main(){
    int i=1, nbr, count=1;

    do
    {
        printf("Entrez votre nbr : ");
        scanf("%d", &nbr);
    } while ( nbr <= 0);
    

    while (count <= nbr)
    {
        if (i % 2 != 0)
        {
            if (count == nbr)
            {
                printf("%d.", i);
            }else{
                printf("%d ,", i);
            }
            
            
            count++;
        }

        i++;
    }
        


    return 0;
}