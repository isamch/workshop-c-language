#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  Challenge 1 : Paire ou Impaire :

int main(){
    
    int nbr;

    printf("Entrez votre Number : ");
    scanf("%d", &nbr);


    if ( nbr % 2 == 0 )
    {
        printf("%d est un number pair.\n", nbr);
    }else{
        printf("%d et un number Impair.\n", nbr);
    }
    


    return 0;
}