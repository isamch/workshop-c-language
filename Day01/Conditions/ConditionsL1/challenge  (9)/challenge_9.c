#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Challenge 9 : Vérification d'Alphabet

int main(){
    
    char L;
    
    printf("Entrez votre caractere : ");
    scanf("%c", &L);


    if ((L >= 65 && L <= 90) || (L >= 97 && L <= 122))
    {
        printf("caractere est un Alphabet.\n");
        if ( L >= 65 && L <= 90 )
        {  
            printf("caractere est Majiscule.\n");
            
        }else{
            printf("caractere est Miniscule.\n");

        }
        
    }else {
        printf("caractere Pas un Alphabet.\n");

    }
    
    
    


    return 0;
}