#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Challenge 8 : Fonction de Vérification de Parité :


int verification_parite(int nbr){

    if ( nbr % 2 == 0)
    {
        return 1;
    }else
    {
        return 0;
    }

}


int main(){
    
    int nbr, parite;

    printf("Entrez : ");
    scanf("%d", &nbr);
    
    parite = verification_parite(nbr);
    // printf("%d ", parite);

    if (parite)
    {
        printf("le nombre %d est paire.\n", nbr);
    }else{
        printf("le nombre %d est impaire.\n", nbr);
    }
    
    
    return 0;
}