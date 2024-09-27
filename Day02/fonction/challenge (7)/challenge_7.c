#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

// Challenge 7 : Fonction d'Inversion de Chaîne :

void Inversion_chain(char arr[]){

    int i;
    char temp;    

    // calcul lenght :
    int lenght = 0;
    while ( arr[lenght] != '\0' )
    {
        lenght++;
    }

    // traitement :
    for ( i = 0; i < lenght/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[lenght-1-i];
        arr[lenght-1-i] = temp;

    }

    // affichage : 
    for ( i = 0; i < lenght; i++)
    {
        printf("%c", arr[i]);
    }
    
}


int main(){
    char arr[MAX];    

    printf("Entrez : ");
    scanf("%s", arr);

    Inversion_chain(arr);
    

    return 0;
}