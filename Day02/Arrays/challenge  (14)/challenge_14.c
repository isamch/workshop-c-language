#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARRAY 100

// Challenge 14 : Calculer la Moyenne :

int main(){
    int i, n, somme = 0, moyenne;
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

    // system("cls");

    //  traitement & affichage :
    for ( i = 0; i < n; i++)
    {
        somme += arr[i];
    }

    moyenne = somme/n;

    // affichage :
    printf("\n============\n");
    
    printf("Moyenne : %d", moyenne);

   
    return 0;
}