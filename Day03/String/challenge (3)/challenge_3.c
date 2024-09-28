#include <stdio.h>
#include <string.h>
#define MAX 50

// Challenge 3 : Concaténation de Chaînes



int main(){

    char text_1[MAX];
    char text_2[MAX];
    int i=0;
    int length_1 = 0, length_2 = 0;

    printf("Entrez : ");
    scanf("%[^\n]", text_1);
    getchar();
    printf("Entrez : ");
    scanf("%[^\n]", text_2);
    getchar();

    // lenght text 1:
    while (text_1[length_1] != '\0')
    {    
        length_1++;  
    }
    // lenght text 2:
    while (text_2[length_2] != '\0')
    {    
        length_2++;  
    }

    // traitement :
    int j = 0;
    for ( i = length_1; i < length_1 + length_2 ; i++)
    {
        text_1[i] = text_2[j];

        j++;
    }

    text_1[length_1+length_2] = '\0';


    // affichage :
    printf("\n===============\n");
    printf("%s", text_1);
  
    

    

    return 0;
}
