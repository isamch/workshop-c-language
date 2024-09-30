#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "function.h"

int count_contact = 0;

// Affichage Menu:
void show_menu()
{
    printf(COLOR_RED "\n========== MENU ============\n");
    printf(COLOR_GREEN "  1. Ajouter un Contact.\n");
    printf("  2. Modifier un Contact.\n");
    printf("  3. Supprimer un Contact.\n");
    printf("  4. Afficher Tous les Contacts.\n");
    printf("  5. Rechercher un Contact.\n");
    printf("  6. Exit.\n" COLOR_RESET);
    printf(COLOR_RED "\n============================\n" COLOR_RESET);
}

// 1. Ajouter un Contact :
void ajouter_contact()
{
    int nbr_add_shot;
    if (count_contact == max_contact)
    {
        printf(COLOR_RED "La liste de contacts est pleine.\n" COLOR_RESET);
        return;
    }

    printf(COLOR_GREEN "Combien de contacts souhaitez-vous ajouter? (Entrez 0 pour retour): ");
    scanf("%d", &nbr_add_shot);

    if (nbr_add_shot == 0)
    {
        return;
    }
    else if (nbr_add_shot > max_contact)
    {
        printf(COLOR_RED "le nombre est grand.\n" COLOR_RESET);
        return;
    }
    else
    {

        for (int i = 0; i < nbr_add_shot; i++)
        {
            printf(COLOR_RED "\n--------------\n" COLOR_RESET);
            printf(COLOR_GREEN "Entrez le contact \'%d\' : \n", i + 1);

        dega_set:
            getchar();
            printf("Entrez le Nom : ");
            scanf("%[^\n]", contact[count_contact].nom);

            for (int i = 0; i < count_contact; i++)
            {
                if (strcasecmp(contact[count_contact].nom, contact[i].nom) == 0)
                {
                    printf(COLOR_RED "Le Nom dega existe.!\n");
                    printf(COLOR_RED "\n--------------\n" COLOR_RESET);
                    goto dega_set;
                }
            }

            getchar();
            printf(COLOR_GREEN "Entrez le Numero : ");
            scanf("%s", contact[count_contact].numero);
            getchar();
            printf(COLOR_GREEN "Entrez le Email : ");
            scanf("%[^\n]", contact[count_contact].email);

            count_contact++;
        }
        sorting_contact();

    }
}

// 2. Modifier un Contact :
void Modifier_Contact()
{
    int i, found = 0, choice_menu_modify;
    char search_name[max_char];

    // contact vide :
    if (count_contact == 0)
    {
        printf(COLOR_RED "La liste de contacts est vide.\n" COLOR_RESET);
        return;
    }

contact_nexist_pas:
    getchar();
    printf(COLOR_GREEN "Entrez le nom du numero que vous souhaitez modifier (Entrez x pour retour) : ");
    scanf("%[^\n]", search_name);

    if (strcasecmp(search_name, "x") == 0)
    {
        return;
    }
    
    // search :
    for (i = 0; i < count_contact; i++)
    {
        if (strcasecmp(search_name, contact[i].nom) == 0)
        {
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf(COLOR_RED "Ce contact n'existe pas\n" COLOR_RESET);
        goto contact_nexist_pas;
    }
    else if (found == 1)
    {

        // affichage the search contact:
        printf(COLOR_RED "\n--------------\n" COLOR_RESET);
        printf(COLOR_GREEN "Contact que vous recherchez pour modifier: \n");
        printf("Nom : %s\n", contact[i].nom);
        printf("Numero : %s\n", contact[i].numero);
        printf("Email : %s\n", contact[i].email);
        printf(COLOR_RED "\n--------------\n" COLOR_RESET);

    false_choice_modify:
        // modify :
        // MENU MODIFY :
        printf(COLOR_RED "\n====================\n" COLOR_RESET);
        printf(COLOR_GREEN "1. Modifier le numero.\n");
        printf("2. Modifier l'e-mail.\n");
        printf("3. Tout modifier.\n");
        printf("0. Entrez 0 pour retour.\n");
        printf(COLOR_RED "\n=================\n" COLOR_RESET);

        printf(COLOR_GREEN "Entrez Votre Choix : ");
        scanf("%d", &choice_menu_modify);

        switch (choice_menu_modify)
        {
        case 1:
            printf(COLOR_GREEN "Entrez nouvelle numero : ");
            scanf("%s", contact[i].numero);
            break;
        case 2:
            getchar();
            printf("Entrez nouvelle email : ");
            scanf("%[^\n]", contact[i].email);
            break;
        case 3:
            printf("Entrez nouvelle numero : ");
            scanf("%s", contact[i].numero);
            getchar();
            printf("Entrez nouvelle email : ");
            scanf("%[^\n]", contact[i].email);
            break;
        case 0:
            return;
            break;

        default:
            printf(COLOR_RED "Votre choix n'est pas disponible!\n" COLOR_RESET);
            goto false_choice_modify;
            break;
        }
    }
}

// 3. Supprimer un Contact :
void Supprimer_Contact()
{

    // contact vide :
    if (count_contact == 0)
    {
        printf(COLOR_RED "La liste de contacts est vide.\n" COLOR_RESET);
        return;
    }

    int i, found = 0, found_place;
    char search_name[max_char];

contact_nexist_sup:
    getchar();
    printf(COLOR_GREEN "Entrez le nom du numero que vous souhaitez supprimer (Entrez x pour retour): ");
    scanf("%[^\n]", search_name);

    if (strcasecmp(search_name, "x") == 0)
    {
        return;
    }

    // search :
    for (i = 0; i < count_contact; i++)
    {
        if (strcasecmp(search_name, contact[i].nom) == 0)
        {
            found = 1;
            found_place = i;
            break;
        }
    }

    if (found == 0)
    {
        printf(COLOR_RED "Ce contact n'existe pas\n" COLOR_RESET);
        goto contact_nexist_sup;
    }
    else if (found == 1)
    {

        // affichage the search contact:
        printf(COLOR_RED "\n-----------------\n" COLOR_RESET);
        printf(COLOR_GREEN "Contact que vous recherchez pour supprimer : \n");
        printf("Nom : %s\n", contact[found_place].nom);
        printf("Numero : %s\n", contact[found_place].numero);
        printf("Email : %s\n", contact[found_place].email);
        printf(COLOR_RED "\n-----------------\n" COLOR_RESET);

        // menu pour confirmation :
        int choice_confirmation;

    false_choice_sup:
        printf(COLOR_YELLOW "Voulez-vous supprimer ce numero?");
        printf(COLOR_RED "\n--------\n");
        printf("1. Oui.\n" COLOR_RESET);
        printf(COLOR_YELLOW "2. Non.\n");
        printf(COLOR_RED "\n--------\n" COLOR_RESET);

        printf(COLOR_GREEN "Entrez : ");
        scanf("%d", &choice_confirmation);

        switch (choice_confirmation)
        {
        case 1:
            for (i = found_place; i < count_contact; i++)
            {
                contact[i] = contact[i + 1];
            }
            count_contact--;
            printf(COLOR_GREEN "Contact Suprimer.\n");
            break;
        case 2:
            return;
            break;
        default:
            printf(COLOR_RED "Mauvais choix! Essayer a nouveau.\n" COLOR_RESET);
            goto false_choice_sup;
            break;
        }
    }
}

// 4. Afficher Tous les Contacts :
void affichage_contact()
{
    // contact vide :
    if (count_contact == 0)
    {
        printf(COLOR_RED "La liste de contacts est vide.\n" COLOR_RESET);
        return;
    }


    printf(COLOR_RED "\n======================= Liste des contact ========================\n");

    printf(COLOR_RED "\n+-------------------+--------------------+----------------------------+\n");
    printf(COLOR_GREEN "| Nom               | Numero             | Email                      |");
    printf(COLOR_RED "\n+-------------------+--------------------+----------------------------+\n");

    for (int i = 0; i < count_contact; i++)
    {

        printf(COLOR_GREEN "| %-18s| %-19s| %-27s|\n", contact[i].nom, contact[i].numero, contact[i].email);
    }
    printf(COLOR_RED "\n+-------------------+--------------------+----------------------------+\n");
}

// 5. Rechercher un Contact :
void search_contact()
{

    int i, found = 0;
    char search_name[max_char];

contact_nexist_search:
    getchar();
    printf(COLOR_GREEN "Entrez le nom du numero que vous recherchez (Entrez X pour retour): ");
    scanf("%[^\n]", search_name);

    if (strcasecmp(search_name, "x") == 0)
    {
        return;
    }
    
    // search :
    for (i = 0; i < count_contact; i++)
    {
        if (strcasecmp(search_name, contact[i].nom) == 0)
        {
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf(COLOR_RED "Ce contact n'existe pas\n" COLOR_RESET);
        goto contact_nexist_search;
    }
    else if (found == 1)
    {

        // affichage the search contact:
        printf(COLOR_RED "\n-----------------------\n" COLOR_RESET);
        printf(COLOR_GREEN "Contact que vous recherchez: \n");
        printf("Nom : %s\n", contact[i].nom);
        printf("Numero : %s\n", contact[i].numero);
        printf("Email : %s\n" COLOR_GREEN, contact[i].email);
        printf(COLOR_RED "\n----------\n" COLOR_RESET);
    }
}

// press enter to continue :
void enter_continue()
{
    printf(COLOR_GREEN "Click Sur \'ENTRE\' Pour Continue..." COLOR_RESET);
    getchar();
    getchar();
}

// fonction de tri :

void sorting_contact()
{

    contacts temp;

    for (int i = 0; i < count_contact - 1; i++)
    {
        for (int j = 0; j < count_contact - 1; j++)
        {
            if (strcmp(contact[j].nom, contact[j + 1].nom) > 0)
            {
                temp = contact[j];
                contact[j] = contact[j + 1];
                contact[j + 1] = temp;
            }
        }
    }
}
