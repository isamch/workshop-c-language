#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX_ARRAY 100


// Challenge 12 : Tri par Bulles


int main() {
    int i, j, nbr, temp;
    int arr[MAX_ARRAY];

    // number d'elements :
    printf("Entrez le nombre d'elements de tableau : ");
    scanf("%d", &nbr);
    printf("\n==============\n");
    printf("Entrez les elements de tableau  : ");

    // remplissage :
    for ( i = 0; i < nbr; i++)
    {
        printf("Enter arr[%d] : ", i+1);
        scanf("%d", &arr[i]);
    }

    // traitement :

    for ( i = 0; i < nbr; i++){
        
        for ( j = 0; j < nbr-1; j++){
            if ( arr[j] > arr[j+1] ){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
            
        }
        

    }
    
    for ( i = 0; i < nbr; i++){
        printf(" %d", arr[i]);

        if ( i < nbr-1 )
        {
            printf(",");
        }else{
            printf(".\n");
        }
    }
    




    return 0;
}
