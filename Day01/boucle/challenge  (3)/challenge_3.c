#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Challenge 3 : Somme des N Nombres


int main(){
    int i, nbr, n=0;

    do
    {
        printf("Entrez votre nbr : ");
        scanf("%d", &nbr);
    } while ( nbr <= 0);
    

    for ( i = 1 ; i <= nbr ; i++)
    {
        
        n += i;

    }
    
    printf("Somme des %d Nombres : %d \n",nbr, n);


    return 0;
}