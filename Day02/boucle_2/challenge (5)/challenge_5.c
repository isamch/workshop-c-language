#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//  Challenge 5 : Somme des N Nombres : 


int main() {
   
    int i, nbr, somme=0;

    printf("Entrez votre number : ");
    scanf("%d", &nbr);


    for ( i = 1; i <= nbr; i++)
    {
        
        somme += i;

        if (i==nbr)
        {
            printf("%d =", i);
        }else{
            printf("%d + ", i);
        }
        
        

    }
        printf("=================\n");
        printf(" %d", somme);


    return 0;
}