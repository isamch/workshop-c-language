#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#include "function.h"


contacts contact[max_contact];

extern int count_contact;



int main()
{

    int choice;





    do
    {
        
        printf("\033[1;32m"
            "        .--.       \n"
            "       |o_o |      \n"
            "       |:_/ |      \n"
            "      //   \\ \\     \n"
            "     (|     | )    \n"
            "    /'\\_   _/`\\   \n"
            "    \\___)=(___/    \n"
            "                  \n"
            "                  \n"
            "\033[0m");
        show_menu();

        printf(COLOR_RED"\n====================\n"COLOR_RESET);
        printf(COLOR_GREEN"Entrez votre choix : "COLOR_RESET);
        scanf("%d", &choice);

        while (choice <= 0 && choice <= 7)
        {
            printf(COLOR_GREEN"Entrez correct number pour votre choix : ");
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
            printf(COLOR_RED"\n--------------\n");
            printf(COLOR_BLUE"Merci Pour Utiliser Votre Programme.\n");
            printf(COLOR_RED"\n--------------\n"COLOR_RESET);
            break;
        }
    } while (choice != 6);

    return 0;
}


