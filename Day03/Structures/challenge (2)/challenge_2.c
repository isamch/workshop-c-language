#include <stdio.h>
#include <string.h>
#define MAX_char 50
#define MAX_etud 30

// Challenge 2 : Structure avec Tableau :


typedef struct 
{
    char nom[MAX_char];
    char prenom[MAX_char];
    int age;
    float note[3];
    
}etud;


int main(){

    etud et_1[MAX_etud];
    int i, nbr_etud;

    printf("How many Etud : ");
    scanf("%d", &nbr_etud);


    for ( i = 0; i < nbr_etud; i++)
    {
        printf("======== Etud %d ========\n", i+1);

        printf("Entrez Nom : ");
        scanf("%s", et_1[i].nom);
        getchar();

        printf("Entrez Prenom : ");
        scanf("%s", et_1[i].prenom); 
        getchar();

        for (int j = 0; j < 3; j++)
        {
            printf("Entrez Note %d : ", j+1);
            scanf("%f", &et_1[i].note[j]);
        }
        
    }

    
    // Affichage :
    printf("\n==================\n");
    
    for ( i = 0; i < nbr_etud; i++)
    {
        printf("Nom : %s.\nPrenom : %s.\n.", et_1[i].nom, et_1[i].prenom);

 
        for (int j = 0; j < 3; j++)
        {
            printf("Note %d : %.2f.\n", j+1, et_1[i].note[j]);
        }

       
    }
    

    return 0;
}
