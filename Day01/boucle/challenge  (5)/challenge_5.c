#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Challenge 5 : Calcul de la Puissance

int main(){
    
    int i, nbr, pw, resault = 1;

    printf("Entrez votre number : ");
    scanf("%d", &nbr);
    printf("Entrez l'exposant  : ");
    scanf("%d", &pw);


    for ( i = 0; i < pw; i++)
    {
        resault = resault * nbr;
    }

    printf("\n===================\n");
    printf("Resault = %d", resault);
    
    



    return 0;
}