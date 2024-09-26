#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARRAY 100

// Challenge 9 : Inversion d'un Tableau

int main(){
    int i, n, temp;
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

    system("cls");

    //  traitement & affichage :
    for ( i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;

    }

    // affichage :
    printf("\n============\n");
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