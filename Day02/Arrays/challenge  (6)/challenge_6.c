#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARRAY 100

// Challenge 6 : Multiplication des Éléments

int main(){
    int i, n, fac_multi;
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
 
    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &fac_multi);

    //  traitement & affichage :
    for ( i = 1; i < n; i++)
    {
        printf("%d * %d = %d\n",arr[i], fac_multi, arr[i]*fac_multi);
        
    }

    

    return 0;
}