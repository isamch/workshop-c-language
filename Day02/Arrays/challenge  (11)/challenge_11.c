#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARRAY 100

// Challenge 11 : Remplacer un Élément

int main(){
    int i, n, old_value, new_value;
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

    printf("enter the old value : ");
    scanf("%d", &old_value);

    printf("enter the new value : ");
    scanf("%d", &new_value);

    //  traitement & affichage :
    for ( i = 0; i < n; i++)
    {
            if ( old_value == arr[i] )
            {
                arr[i] = new_value;
                break;
            }
            
    }

    // affichage :
    printf("\n============\n");
    printf("New Array : ");
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