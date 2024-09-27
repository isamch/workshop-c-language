#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//  Challenge 6 : Facteurs d'un Nombre :


int main() {
   
    int i, nbr;

    printf("Entrez votre number : ");
    scanf("%d", &nbr);


    for ( i = 1; i <= nbr; i++)
    {
        if ( nbr % i == 0)
        {
            if (i==nbr)
            {
                printf("%d.", i);
            }else{
                printf("%d, ", i);
            }
        }
        
        

    }


    return 0;
}