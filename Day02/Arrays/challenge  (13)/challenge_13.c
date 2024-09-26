#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARRAY 100

// Challenge 13 : Afficher les Éléments Impairs

int main(){
    int i, n;
    int arr[MAX_ARRAY];
    int impair_arr[MAX_ARRAY];
    
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
        if ( arr[i] % 2 != 0 )
        {
            impair_arr[count] = arr[i];
            count++;
        }
    }


    // affichage :
    printf("\n============\n");
    printf("les Elements Impairs : ");
    for ( i = 0; i < count; i++)
    {
        if ( i == count-1)
        {
            printf("%d.", impair_arr[i]);
        }else{
            printf("%d, ", impair_arr[i]);
        }    
    }

   
    return 0;
}