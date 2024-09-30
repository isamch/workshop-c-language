#include <stdio.h>
#include <stdlib.h>


// Challenge 2 : Tri par Insertion


int main() {
    // tri par insertion :

    int t[20];
    int i, j, n=6, tmp;

    // Enter Data :
    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n>20);

    for ( i = 0; i < n; i++)
    {
        printf("Enter t[%d]: ", i+1);
        scanf("%d", &t[i]);
    }
    
    // tri par insertion style for loop:
    for ( i = 1; i < n ; i++)
    {
        tmp = t[i];
        for ( j = i-1; j >= 0 && t[j] > tmp; j--)
        {
            t[j + 1] = t[j];
        }   
        t[j+1] = tmp;
        
    }

    
    printf("\n------------------\n");

    for ( i = 0; i < n; i++)
    {
        if ( i == n-1)
        {
            printf(" %d.", t[i]);
        }else{
            printf(" %d,", t[i]);
        }
        
       
    }
    




    return 0;
}