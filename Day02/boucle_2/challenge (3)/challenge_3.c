#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Affichage des Nombres Premiers

int main (){
    int i, nbr, s_q;
    int est_pre = 1;


    printf("Entrez votre number : ");
    scanf("%d", &nbr);

    if ( nbr == 0 || nbr == 1)
    {
        est_pre = 0;
    }else
    {   
        s_q = (int)sqrt(nbr);
        for ( i = 2; i <= s_q; i++)
        {
            if ( nbr % i == 0 )
            {
                est_pre = 0;
                break;
            }else{
                est_pre = 1;
            }    
        }
        
    }
    
    if ( est_pre )
    {
        printf("%d est un nombre premier.\n", nbr);
    }else
    {
        printf("%d Pas un nombre premier.\n", nbr);
    }
    
    

    return 0;
}
