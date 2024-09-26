#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARRAY 100

// Challenge 12 : Afficher les Éléments Paire

int main(){
    int i, n;
    int arr[MAX_ARRAY];
    int pair_arr[MAX_ARRAY];
    
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
    int count = 0;
    for ( i = 0; i < n; i++)
    {
        if ( arr[i] % 2 == 0 )
        {
            pair_arr[count] = arr[i];
            count++;
        }
    }


    // affichage :
    printf("\n============\n");
    printf("Afficher les Éléments Paire : ");
    for ( i = 0; i < count; i++)
    {
        if ( i == count-1)
        {
            printf("%d.", pair_arr[i]);
        }else{
            printf("%d, ", pair_arr[i]);
        }    
    }

   
    return 0;
}