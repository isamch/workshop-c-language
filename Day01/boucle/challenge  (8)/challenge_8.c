#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Challenge 8 : Affichage de la Suite de Fibonacci


int main() {
   
    int i, nbr, f_0, f_1, f_3;

    printf("Entrez votre number : ");
    scanf("%d", &nbr);


    f_0 = 0;
    f_1 = 1; 
    for (i = 0; i <= nbr; i++)
    {
        if (i == 0)
        {
            printf("F(0) = 0");
            printf("\n===============\n");

        }else if (i == 1)
        {
            printf("F(1) = 1");
            printf("\n===============\n");

        }else{
            f_3 = f_0 + f_1;
            f_0 = f_1;
            f_1 = f_3;

            printf("F(%d) = %d", i, f_3);
            printf("\n===============\n");
        }
        
        
        

    }   

    // printf("\n===============\n");
    


    return 0;
}
