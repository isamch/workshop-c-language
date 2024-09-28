#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_char 50

// Challenge 5 : Structure et Fonction de Retour :

typedef struct
{
    char titre[MAX_char];
    char autor[MAX_char];
    int annee;

} books;

// menu ================== :
void menu()
{
    // menu :
    printf("\n============ MENU ============\n");
    printf("\n            1 - affichage.       \n");
    printf("\n            2 - edit.            \n");
    printf("\n            3 - exit.            \n");
}

void in_menu(int choice)
{
    if (choice == 1)
    {
        printf("\n============ MENU DE AFFICHAGE ============\n");
        printf("\n             1 - AFFICHAGE : All info.    \n");
        printf("\n             2 - AFFICHAGE : Titre.       \n");
        printf("\n             3 - AFFICHAGE : Autor.       \n");
        printf("\n             4 - AFFICHAGE : Annee.       \n");
    }
    else if (choice == 2)
    {
        printf("\n============ MENU DE MODIFY  =============\n");
        printf("\n             1 - Edit : All info.    \n");
        printf("\n             2 - Edit : Titre.       \n");
        printf("\n             3 - Edit : Autor.       \n");
        printf("\n             4 - Edit : Annee.       \n");
    }
}

// show books ================== :
void afichage_books(char titre[], char autor[], int annee)
{
    int choice_affiche;
    printf("Enter Your Choice : ");
    scanf("%d", &choice_affiche);

    printf("\n====================\n");

    if (choice_affiche == 1)
    {
        printf("Titre = %s.\n", titre);
        printf("Autor = %s.\n", autor);
        printf("Annee = %d.\n", annee);
    }
    else if (choice_affiche == 2)
    {
        printf("Titre = %s.\n", titre);
    }
    else if (choice_affiche == 3)
    {
        printf("Titre = %s.\n", titre);
    }
    else if (choice_affiche == 4)
    {
        printf("Annee = %d\n", annee);
    }
}

// Edit Book ==================== :
void edit_book(char titre[], char autor[], int annee)
{
    int choice_Edit;
    printf("Enter Your Choice : ");
    scanf("%d", &choice_Edit);

    printf("\n====================\n");

    if (choice_Edit == 1)
    {
        printf("Enter New Title : ");
        scanf("%[^\n]", titre);
        getchar();
        printf("Enter New Autor : ");
        scanf("%[^\n]", autor);
        getchar();
        printf("Enter New Annee : ");
        scanf("%d", &annee);
        getchar();
    }
    else if (choice_Edit == 2)
    {
        printf("Enter New Title : ");
        scanf("%[^\n]", titre);
        getchar();
    }
    else if (choice_Edit == 3)
    {
        printf("Enter New Autor : ");
        scanf("%[^\n]", autor);
        getchar();
    }
    else if (choice_Edit == 4)
    {
        printf("Enter New Annee : ");
        scanf("%d", &annee);
        getchar();
    }
}

int main()
{
    int choice;
    books book;

    strcpy(book.titre, "boita");
    strcpy(book.autor, "hmed sefriwi");
    book.annee = 2001;

    do
    {
        // affichage menu :
        menu(choice);

        printf("Enter Your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            in_menu(choice);
            afichage_books(book.titre, book.autor, book.annee);
            break;
        case 2:
            in_menu(choice);
            edit_book(book.titre, book.autor, book.annee);
            break;
        case 3:
            exit(0);
            
        default:
            printf("Wrong number.");
            break;
        }

    } while (1);

    return 0;
}
