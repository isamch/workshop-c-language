#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//  Challenge 7 : Suite de Fibonacci :


int main() {
   
    int i, nbr, f_0 = 0, f_1 = 1, f_next;

    printf("Entrez votre number : ");
    scanf("%d", &nbr);

    
    for ( i = 0; i < nbr; i++)
    {
        if (i == 0)
        {
            f_next = 0;
        }else if (i == 1)
        {
            f_next = 1;
        }else{
            f_next = f_0 + f_1;
            f_0 = f_1;
            f_1 = f_next; 
        }
        
        
        if (i==nbr-1)
        {
            printf("%d.", f_next);
        }else{
            printf("%d, ", f_next);
        }
                    
        
    }



    return 0;
}