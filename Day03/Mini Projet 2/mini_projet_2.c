#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max_char 50
#define max_num 20
#define max_contact 200

// Mini-Projet : Système de Gestion de Contacts :

// Menu :

// 1. Ajouter un Contact
// 2. Modifier un Contact
// 3. Supprimer un Contact
// 4. Afficher Tous les Contacts
// 5. Rechercher un Contact
// 6. Exit

typedef struct
{
    char nom[max_char];
    char numero[max_num];
    char email[max_char];

} contacts;

// struct defin :
contacts contact[max_contact];

int count_contact = 0;

// Affichage Menu:
void show_menu()
{
    printf("\n========== MENU ============\n");
    printf("1. Ajouter un Contact\n");
    printf("2. Modifier un Contact\n");
    printf("3. Supprimer un Contact\n");
    printf("4. Afficher Tous les Contacts\n");
    printf("5. Rechercher un Contact\n");
    printf("6. Exit\n");
    printf("\n============================\n");
}

// 1. Ajouter un Contact :
void ajouter_contact()
{
    int nbr_add_shot;
    if (count_contact == max_contact)
    {
        printf("La liste de contacts est pleine.\n");
        return;
    }

    printf("Combien de contacts souhaitez-vous ajouter? (Entrez 0 pour retour): ");
    scanf("%d", &nbr_add_shot);

    if (nbr_add_shot == 0)
    {
        return;
    }else if (nbr_add_shot > max_contact)
    {
        printf("le nombre est grand.\n");
        return;
    }else{

        for (int i = 0; i < nbr_add_shot; i++)
        {
            printf("\n______________\n");
            printf("Entrez le contact \'%d\' : \n", i + 1);

            dega_set:
            getchar();
            printf("Entrez le Nom : ");
            scanf("%[^\n]", contact[count_contact].nom);

            for (int i = 0; i < count_contact; i++)
            {
                if (strcmp(contact[count_contact].nom, contact[i].nom) == 0 )
                {
                    printf("Le Nom dega existe.!\n");
                    printf("\n______________\n");
                    goto dega_set;
                }
            }
            
            getchar();
            printf("Entrez le Numero : +");
            scanf("%s", contact[count_contact].numero);
            getchar();
            printf("Entrez le Email : ");
            scanf("%[^\n]", contact[count_contact].email);

            count_contact++;
        }

        system("cls");
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
        printf("La liste de contacts est vide.\n");
        return;
    }

contact_nexist_pas:
    getchar();
    printf("Entrez le nom du numero que vous souhaitez modifier : ");
    scanf("%[^\n]", search_name);

    
    // search :
    for (i = 0; i < count_contact; i++)
    {
        if (strcmp(search_name, contact[i].nom) == 0)
        {
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("Ce contact n'existe pas\n");
        goto contact_nexist_pas;
    }
    else if (found == 1)
    {

        // affichage the search contact:
        printf("\n____________________\n");
        printf("Contact que vous recherchez pour modifier: \n");
        printf("Nom : %s\n", contact[i].nom);
        printf("Numero : %s\n", contact[i].numero);
        printf("Email : %s\n", contact[i].email);
        printf("\n____________________\n");

    false_choice_modify:
        // modify :
        // MENU MODIFY :
        printf("\n====================\n");
        printf("1. Modifier le numero.\n");
        printf("2. Modifier l'e-mail.\n");
        printf("3. Tout modifier.\n");
        printf("0. Entrez 0 pour retour.\n");
        printf("\n=================\n");

        printf("Entrez Votre Choix : ");
        scanf("%d", &choice_menu_modify);

        switch (choice_menu_modify)
        {
        case 1:
            printf("Entrez nouvelle numero : ");
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
            printf("Votre choix n'est pas disponible!\n");
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
        printf("La liste de contacts est vide.\n");
        return;
    }

    int i, found = 0, found_place;
    char search_name[max_char];

contact_nexist_sup:
    getchar();
    printf("Entrez le nom du numero que vous souhaitez supprimer : ");
    scanf("%[^\n]", search_name);

    // search :
    for (i = 0; i < count_contact; i++)
    {
        if (strcmp(search_name, contact[i].nom) == 0)
        {
            found = 1;
            found_place = i;
            break;
        }
    }

    if (found == 0)
    {
        printf("Ce contact n'existe pas\n");
        goto contact_nexist_sup;
    }
    else if (found == 1)
    {

        // affichage the search contact:
        printf("\n____________________\n");
        printf("Contact que vous recherchez pour supprimer : \n");
        printf("Nom : %s\n", contact[found_place].nom);
        printf("Numero : %s\n", contact[found_place].numero);
        printf("Email : %s\n", contact[found_place].email);
        printf("\n____________________\n");

        // menu pour confirmation :
        int choice_confirmation;

    false_choice_sup:
        printf("Voulez-vous supprimer ce numero?");
        printf("\n_____\n");
        printf("1. Oui.\n");
        printf("2. Non.\n");
        printf("\n_____\n");

        printf("Entrez : ");
        scanf("%d", &choice_confirmation);

        switch (choice_confirmation)
        {
        case 1:
            for (i = found_place; i < count_contact; i++)
            {
                contact[i] = contact[i + 1];
            }
            count_contact--;
            printf("Contact Suprimer.\n");
            break;
        case 2:
            return;
            break;
        default:
            printf("Mauvais choix! Essayer a nouveau.\n");
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
        printf("La liste de contacts est vide.\n");
        return;
    }

    printf("\n============= Liste des contact ===============\n");
    for (int i = 0; i < count_contact; i++)
    {
        printf("===Contact %d :  ", i + 1);
        printf("\n___________\n");
        printf("Nom : %s\n", contact[i].nom);
        printf("Numero : %s\n", contact[i].numero);
        printf("Email : %s\n", contact[i].email);
        printf("\n_____________________\n");
    }
}

// 5. Rechercher un Contact :
void search_contact()
{

    int i, found = 0;
    char search_name[max_char];

contact_nexist_search:
    getchar();
    printf("Entrez le nom du numero que vous recherchez (Entrez X pour retour): ");
    scanf("%[^\n]", search_name);


    // search :
    for (i = 0; i < count_contact; i++)
    {
        if (strcmp(search_name, contact[i].nom) == 0)
        {
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Ce contact n'existe pas\n");
        goto contact_nexist_search;
    }
    else if (found == 1)
    {

        // affichage the search contact:
        printf("\n____________________\n");
        printf("Contact que vous recherchez: \n");
        printf("Nom : %s\n", contact[i].nom);
        printf("Numero : %s\n", contact[i].numero);
        printf("Email : %s\n", contact[i].email);
        printf("\n__________\n");
    }
}


// press enter to continue :
void enter_continue(){
    printf("Click Sur \'ENTRE\' Pour Continue...");
    getchar();
    getchar();
}


// sorting :

// void sorting(){


//     for (int i = 0; i < count_contact; i++)
//     {
//         for (int j = i+1 ; j < count_contact; j++)
//         {
//             if (contact[i].nom[0] > contact[i].nom[0])
//             {
               
//             }
            

//         }
        
//     }
    




// }









int main()
{

    int choice;

    do
    {
        show_menu();

        printf("\n====================\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choice);

        while (choice <= 0 && choice <= 7)
        {
            printf("Entrez correct number pour votre choix : ");
            scanf("%d", &choice);
        }

        if (count_contact != 0)
        {
            system("cls");
        }
        
        

        switch (choice)
        {
        case 1:
            ajouter_contact();
            enter_continue();
            system("cls");
            break;
        case 2:
            Modifier_Contact();
            enter_continue();
            system("cls");
            break;
        case 3:
            Supprimer_Contact();
            enter_continue();
            system("cls");
            break;
        case 4:
            affichage_contact();
            enter_continue();
            system("cls");
            break;
        case 5:
            search_contact();
            enter_continue();
            system("cls");
            break;
        case 6:
            printf("\n____________________\n");
            printf("Merci Pour Utiliser Votre Programme.\n");
            break;
        }
    } while (choice != 6);

    return 0;
}