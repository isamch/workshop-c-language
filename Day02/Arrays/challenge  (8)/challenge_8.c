#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARRAY 100

// Challenge 8 : Copie d'un Tableau

int main(){
    int i, n;
    int arr[MAX_ARRAY];
    int copy_arr[MAX_ARRAY];
    
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
    for ( i = 0; i < n; i++)
    {
        copy_arr[i] = arr[i];

    }

    // affichage :
    printf("\n============\n");
    printf("arr :\n");
    for ( i = 0; i < n; i++)
    {
        if ( i == n-1)
        {
            printf("%d.", arr[i]);
        }else{
            printf("%d ,", arr[i]);
        }    
    }
    printf("\n============\n");
    printf("copy_arr :\n");

    for ( i = 0; i < n; i++)
    {
        if ( i == n-1)
        {
            printf("%d.", copy_arr[i]);
        }else{
            printf("%d ,", copy_arr[i]);
        }    
    }
    

    return 0;
}