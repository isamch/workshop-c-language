#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARRAY 100

// Challenge 4 : Trouver le Maximum

int main(){
    int i, n, max;
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
    max = arr[0];
    for ( i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        
    }

    // affichage :
    printf("Affichage : =================\n");
    printf("MAX : %d", max);
   
    

    return 0;
}