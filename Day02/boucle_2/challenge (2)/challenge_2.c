#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Challenge 2 : pyramide d'étoile


int main(){
    int i, j, nbr;

    printf("Entrez votre nbr : ");
    scanf("%d", &nbr);


    for ( i = 1; i <= nbr; i++)
    {


        for ( j = nbr-i; j > 0 ; j--)
        {
            printf(" ");
        }
        
        for ( j = 1; j <= (i*2)-1; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    

    return 0;
}