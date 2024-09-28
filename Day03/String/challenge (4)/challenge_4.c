#include <stdio.h>
#include <string.h>
#define MAX 50

// Challenge 4 : Comparaison de Chaînes


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

    if (length_1 == length_2)
    {
        int est_egales = 1;
        // traitement :
        for ( i = 0; i < length_1 ; i++)
        {   
            if ( text_1[i] != text_2[i] )
            {
                est_egales = 0;
                break;
            }            
        }
        if (est_egales)
        {
            printf("les chaines sont egales.");
        }else{
            printf("les chaines sont differentes.");
        }

    }else{
        printf("les chaines sont differentes.");
    }
    
    return 0;
}
