#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Challenge 7 : Inversion d'un Entier


int main() {
   
    int i=10, nbr, count=1;

    printf("Entrez votre number : ");
    scanf("%d", &nbr);


    while (nbr/i != 0)
    {
        i = i * 10;
        count++;
    }


    
    int n=1, single_nbr;

    for (int j = 1; j <= count; j++)
    {
        
        single_nbr = (nbr / n)%10;

        printf("%d", single_nbr);

        n = n * 10;


    }
    


    return 0;
}
