#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Challenge 13 : Table de Multiplication avec Somme : 


int main(){
    int i, nbr;

    printf("Entrez votre nbr : ");
    scanf("%d", &nbr);


    //  ========= Multiplication  ============ :
    printf(" \n========= Multiplication  ============\n");
    for ( i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", nbr, i, i*nbr);

    }

    //  ========= Somme  ============ :
    printf(" \n============ Somme  ===============\n");
    for ( i = 1; i <= 10; i++)
    {
        printf("%d + %d = %d\n", nbr, i, i+nbr);

    }
    

    return 0;
}