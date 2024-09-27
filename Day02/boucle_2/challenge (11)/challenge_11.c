#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX_ARRAY 100


// Challenge 11 : Moyenne des Nombres :


int main() {
    int i, nbr, somme=0, moyenne;
    int arr[MAX_ARRAY];

    // number d'elements :
    printf("Entrez le nombre d'elements de tableau : ");
    scanf("%d", &nbr);
    printf("\n==============\n");
    printf("Entrez les elements de tableau trie : ");

    // remplissage :
    for ( i = 0; i < nbr; i++)
    {
        printf("Enter arr[%d] : ", i+1);
        scanf("%d", &arr[i]);
    }
    // last element = 0 :
    arr[nbr] = 0;

    
    for ( i = 0; i < nbr; i++){
        
       somme += arr[i];
    }

    // moyyenne : 
    moyenne = somme / nbr;
    printf("Moyenne : %d .", moyenne);
    





    return 0;
}
