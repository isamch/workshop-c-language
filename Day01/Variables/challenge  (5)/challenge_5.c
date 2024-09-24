#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    
    float C;
    
    while (1)
    {
        printf("Entrez la temperature en Celsius : ");
        scanf("%f", &C);

        if ( C < 0 )
        {
            printf("Solide");
        }else if ( C >= 0 && C < 100)
        {
            printf("Liquide");
        }else if ( C >= 100)
        {
            printf("Gaz");
        }

        printf("\n------------\n");
    }
    
    
    
    
    




    return 0;
}