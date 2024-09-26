#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARRAY 100

// Challenge 5 : Trouver le Minimum

int main(){
    int i, n, min;
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

    //  traitement :
    min = arr[0];
    for ( i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        
    }

    // affichage :
    printf("Affichage : =================\n");
    printf("MIN : %d", min);
   
    

    return 0;
}