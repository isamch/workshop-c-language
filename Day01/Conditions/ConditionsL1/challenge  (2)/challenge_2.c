#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Challenge 2 : Voyelle ou Non

int main(){
    char caractere;

    
    printf("Entrez votre caractere : ");
    scanf("%c", &caractere);
    getchar();

    switch (caractere)
    {
    case 'a':
        printf("\'%c\' est une voyelle", caractere);
        break;
    case 'e':
        printf("\'%c\' est une voyelle", caractere);
        break;
    case 'i':
        printf("\'%c\' est une voyelle", caractere);
        break;
    case 'o':
        printf("\'%c\' est une voyelle", caractere);
        break;
    case 'u':
        printf("\'%c\' est une voyelle", caractere);
        break;
    case 'y':
        printf("\'%c\' est une voyelle", caractere);
        break;
    default:
        printf("\'%c\' Pas une voyelle", caractere);
        break;
    }
   




    return 0;
}