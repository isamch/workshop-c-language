#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

#include "function.h"

contacts contact[max_contact];

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

        printf(COLOR_RED "\n====================\n" COLOR_RESET);
        printf(COLOR_GREEN "Entrez votre choix : " COLOR_RESET);
        int input = scanf("%d", &choice);

        if (input != 1 || choice > 6 || choice < 0)
        {

            for (int i = 0; i < 2; i++)
            {
                system("cls");

                printf(COLOR_RED ">> entree invalide " COLOR_RESET);

                for (int j = 0; j < 5; j++)
                {
                    printf(COLOR_RED "!" COLOR_RESET);
                    Sleep(90);
                }
            }

            system("cls");

            while (getchar() != '\n')
                ;
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
            printf(COLOR_RED "\n--------------\n");
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
            printf(COLOR_BLUE "\nMerci Pour Utiliser Votre Programme.\n");
            printf(COLOR_RED "\n--------------\n" COLOR_RESET);
            break;
        }
    } while (choice != 6);

    return 0;
}
