#include <stdio.h>
#include <string.h>
#define MAX 100

// Challenge 2 : Longueur de la Chaîne




int main(){

    char text[MAX];
    int i=0;

    printf("Entrez : ");
    scanf("%[^\n]", text);
    getchar();

    while (text[i] != '\0')
    {    
        i++;  
    }
    
    printf("\n===============\n");
    printf("lenght of %s is : %d\n",text, i);
    
    

    return 0;
}
