#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARRAY 100

// Challenge 10 : Rechercher un Élément


int main(){
    int i, n, search;
    int arr[MAX_ARRAY];
    int found = 0;
    int remember;
    
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

    // search input :
    printf("search about : ");
    scanf("%d", &search);

    //  traitement & affichage :
    for ( i = 0; i < n; i++)
    {
        if ( search == arr[i] )
        {
            found = 1;
            break;
        }
        
    }

    // affichage :
    printf("\n============\n");
    if (found)
    {
        printf("%d found in arr[%d] .\n", search, i+1);
        
    }else
    {
        printf("%d not found.\n", search);
    }
    
    

   
    return 0;
}