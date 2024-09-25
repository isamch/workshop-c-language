#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Challenge 7 : Alphabet Majuscule

int main(){
    
    char L;
    
    printf("Entrez votre caractere : ");
    scanf("%c", &L);


    if (L <= 90 && L >= 65)
    {
        printf("%c est majuscule.", L);
    }else{
        printf("%c est miniscule.", L);
    }
    
    
    
    
    




    return 0;
}