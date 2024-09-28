#include <stdio.h>
#include <string.h>
#define MAX 50

// Challenge 5 : Inversion de Chaîne


int main(){

    char text_1[MAX],temp;
    int i, length_1= 0;

    printf("Entrez : ");
    scanf("%[^\n]", text_1);
    getchar();


    // lenght text 1:
    while (text_1[length_1] != '\0')
    {    
        length_1++;  
    }

    // traitement :

    for ( i = 0; i < length_1/2; i++)
    {
        temp = text_1[i];
        text_1[i] = text_1[length_1-1-i];
        text_1[length_1-1-i] = temp;
    }
    
    // Affichage :
    
    printf("\n===================\n");

    printf("%s", text_1);


    
    return 0;
}
