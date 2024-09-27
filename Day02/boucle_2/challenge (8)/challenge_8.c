#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX_ARRAY 100


//  Challenge 8 : Recherche Dichotomique :
//  Searche Binairy : 


int main() {
   
    int i, nbr, search;
    int low, high, mid;
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

    // search input :
    printf("Recherche : ");
    scanf("%d", &search);

    // traitement :
    low = 0;
    high = nbr - 1;    
    do
    {
        mid = (low + high)/2;

        if ( arr[mid] > search )
        {
            high = mid - 1;  
            
        }else if ( arr[mid] < search )
        {
            low = mid + 1;

        }

    } while ( arr[mid] != search);
    
    // affichage : 
    printf("%d found in arr[%d]", search, mid);
    



    return 0;
}