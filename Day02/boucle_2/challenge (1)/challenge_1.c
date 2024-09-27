#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Challenge 1 : Table de Multiplication Inversée

int main(){
    int i, nbr;

    printf("Entrez votre nbr : ");
    scanf("%d", &nbr);


    for ( i = 10; i >= 1; i--)
    {
        printf("%d * %d = %d \n", nbr, i, i*nbr);

    }
    



    return 0;
}