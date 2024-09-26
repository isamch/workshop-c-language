#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARRAY 100
// Challenge 2 : Saisie et Affichage des Éléments


int main(){
    int i, n;
    int arr[MAX_ARRAY];
    
    // number d'elements :
    printf("Entrez le nombre d'elements de tableau : ");
    scanf("%d", &n);

    // remplissage :
    for ( i = 0; i < n; i++)
    {
        printf("Enter arr[%d] : ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Affichage : =================\n");

    // affichage :
    for ( i = 0; i < n; i++)
    {
        if ( i == n-1)
        {
            printf("%d.", arr[i]);
        }else{
            printf("%d ,", arr[i]);
        }    
    }
    

    return 0;
}