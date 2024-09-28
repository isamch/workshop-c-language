#include <stdio.h>
#include <string.h>
#define MAX 50

// Challenge 6 : Compte des Occurrences d'un Caractère :

int main()
{

    char text_1[MAX];
    int i, length_1 = 0;
    char search_char;

    printf("Entrez : ");
    scanf("%[^\n]", text_1);
    getchar();

    printf("Search about: ");
    scanf("%c", &search_char);
    getchar();

    // lenght text 1:
    while (text_1[length_1] != '\0')
    {
        length_1++;
    }

    int count = 0;
    // traitement :
    for (i = 0; i < length_1; i++)
    {
        if (search_char == text_1[i])
        {
            count++;
        }
    }


    // Affichage :
    printf("\n===================\n");
    if (count == 0)
    {
        printf("\'%c\' On ne le trouve pas.\n", search_char);
    
    }else
    {
        printf("\'%c\' On repete %d fois.\n", search_char, count);
    }
    
    

    return 0;
}
