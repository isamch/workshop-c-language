#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//  Challenge 4 : Inversion d'un Entier


int main() {
   
    int i=10, nbr, count=1, swap = 0;

    printf("Entrez votre number : ");
    scanf("%d", &nbr);


    while (nbr/i != 0)
    {
        i = i * 10;
        count++;
    }


    int n=1, single_nbr;
    int pw = count - 1;
    for (int j = 1; j <= count; j++)
    {
        
        single_nbr = (nbr / n)%10;

        n = n * 10;

        swap = swap + single_nbr * (int)pow(10, pw);

        pw--;

    }
        printf("=================\n");
        printf("Inversion : %d", swap);


    return 0;
}