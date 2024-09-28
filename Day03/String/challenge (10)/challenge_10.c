#include <stdio.h>
#include <string.h>
#define MAX 50

// Challenge 10 : Trouver un Sous-String :

int main()
{

    char text_1[MAX];
    char search[MAX];

    printf("Entrez : ");
    scanf("%[^\n]", text_1);
    getchar();

    printf("Search about: ");
    scanf("%[^\n]", search);
    getchar();

    int found = 0;

    // traitement : 
    if (search[0] == '\0') {
        printf("Input is empty\n");
    }else{

        for (int i = 0; text_1[i] != '\0'; i++) {
            int j = 0;

            while (text_1[i + j] != '\0' && search[j] != '\0' && text_1[i + j] == search[j]) {
                j++;
            }

            if (search[j] == '\0'){

                printf("\'%s\' present dans %d .\n", search, i-1);
                found = 1;
            }
        }

        // Affichage :
        printf("\n===================\n");
        if ( found == 0 )
        {
            printf("\'%s\' On ne le trouve pas.\n", search);
        
        }

    }



    
    
    

    return 0;
}
