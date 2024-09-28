#include <stdio.h>
#include <string.h>
#define MAX 50

// Challenge 9 : Suppression des Espaces :

int main()
{

    char text_1[MAX];
    int i, length_1 = 0;

    printf("Entrez : ");
    scanf("%[^\n]", text_1);
    getchar();


    // lenght text 1:
    while (text_1[length_1] != '\0')
    {
        length_1++;
    }

    // traitement :
    for (i = 0; i < length_1; i++)
    {
        if (text_1[i] == ' ')
        {
            text_1[i] = text_1[i+1];
        }
        
        
    }


    // Affichage :
    printf("\n===================\n");

    printf(" On Majuscules est : %s.\n", text_1);

    return 0;
}
