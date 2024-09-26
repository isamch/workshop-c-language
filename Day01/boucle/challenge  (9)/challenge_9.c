#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Challenge 9 : Compteur de Chiffres


int main() {
   
    int i=10, nbr, count=1;

    printf("Entrez votre number : ");
    scanf("%d", &nbr);


    while (nbr/i != 0)
    {
        i = i * 10;
        count++;
    }


    
    printf("\n=====================\n");
    
    printf("Nombre de chiffres : %d\n", count);


    return 0;
}
