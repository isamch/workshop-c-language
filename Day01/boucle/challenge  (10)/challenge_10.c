#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Challenge 10 : Calcul de la Somme des N Entiers


int main() {
   
    int i, nbr, somme=0;

    printf("Entrez votre number : ");
    scanf("%d", &nbr);


    for ( i = 1; i <= nbr; i++)
    {
        somme+=i;
        
    }
    
    printf("\n=====================\n");
    
    printf(" la somme est : %d\n", somme);


    return 0;
}
