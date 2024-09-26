#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARRAY 100
// Challenge 3 : Somme des Éléments


int main(){
    int i, n, somme = 0;
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

    // traitement :
    for ( i = 0; i < n; i++)
    {
        somme +=arr[i];
    }

    // affichage :
    printf("Affichage : =================\n");

    printf("la somme : %d\n", somme);

    

    return 0;
}