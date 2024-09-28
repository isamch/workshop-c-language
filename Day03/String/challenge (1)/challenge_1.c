#include <stdio.h>
#include <string.h>
#define MAX 100

// Challenge 1 : Affichage d'une Chaîne




int main(){

    char text[MAX];

    
    while (1)
    {
        printf("Entrez : ");
        scanf("%[^\n]", text);
        getchar();

        printf("\n===============\n");
        printf("text : %s\n", text);
    }
    
    
    

    return 0;
}
