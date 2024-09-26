#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARRAY 100

// Challenge 14 : Calculer la Moyenne :

int main(){
    int i, n_1, n_2;
    int arr_1[MAX_ARRAY];
    int arr_2[MAX_ARRAY];
    
    // number d'elements :
    printf("Entrez le nombre d'elements de tableau 1 : ");
    scanf("%d", &n_1);
    // remplissage tableaux 1 : 
    for ( i = 0; i < n_1; i++)
    {
        printf("Enter arr[%d] : ", i+1);
        scanf("%d", &arr_1[i]);
    }

    printf("==========================\n");

    printf("Entrez le nombre d'elements de tableau 2 : ");
    scanf("%d", &n_2);
    // remplissage tableaux 2 :
    for ( i = 0; i < n_2; i++)
    {
        printf("Enter arr[%d] : ", i+1);
        scanf("%d", &arr_2[i]);
    }

    // system("cls");

    //  traitement :
    int j = 0;
    for ( i = n_1; i < n_1+n_2; i++)
    {
        arr_1[i] = arr_2[j];

        j++;
    }
    

    

    // affichage :
    printf("\n============\n");
    for ( i = 0; i < n_1+n_2; i++)
    {
        if ( i == n_1+n_2-1)
        {
            printf("%d.", arr_1[i]);
        }else{
            printf("%d ,", arr_1[i]);
        }   
    }
    
   
    return 0;
}