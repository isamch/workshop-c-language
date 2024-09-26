#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Challenge 1 : Initialisation et Affichage

int main(){
    int i;
    int arr[6] = {1, 3, 2, 5, 6, 8};



    for ( i = 0; i < 6; i++)
    {
        if ( i == 6-1)
        {
            printf("%d.", arr[i]);
        }else{
            printf("%d ,", arr[i]);
        }
        
        
        

    }
    

    return 0;
}