#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Challenge 6 : Positif, Négatif ou Nul

int main(){
    
    int nbr;
    
    printf("Entrez votre Number : ");
    scanf("%d", &nbr);


    if (nbr < 0)
    {
        printf("%d est negatif", nbr);
    }else if (nbr > 0)
    {
        printf("%d est positif", nbr);

    }else{
        printf("%d égal à zéro.", nbr);
    }
    
    
    
    
    




    return 0;
}