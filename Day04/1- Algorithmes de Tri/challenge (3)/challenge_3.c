#include <stdio.h>
#include <stdlib.h>

// Challenge 3 : Tri par Sélection :

int main() {
    // tri par selection :
    int t[20];
    int i, n=6, max, posmax, m;

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
    

    // tri par selection:

    m = n;
    while ( m > 0 )
    {
        max = t[0];
        posmax = 0;
        for ( i = 0; i < m; i++)
        {
            if ( max < t[i] )
            {
                max = t[i];
                posmax = i;

            }
        }

        for ( i = posmax; i < m; i++)
        {
            t[i] = t[i+1];
        }
        t[m-1] = max;
        m--;

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