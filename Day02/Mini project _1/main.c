#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define MAX_BOOKS  100

#include "function.h"





int main() {
    int choice;
    do
    {

        show_menu();

        printf("Enter your choice : ");
        scanf("%d", &choice);
        while ( choice <= 0 || choice > 7)
        {
            printf("\n!!!!!!!!!!!!!!!\n");
            printf("Enter your choice : ");
            scanf("%d", &choice);
        }
        

        switch ( choice )
        {
        case 1:
            add_book();
            system("cls");
            wait_for_enter();
            break;
        case 2:
            system("cls");
            affichage_book();
            wait_for_enter();
            break;
        case 3:
            system("cls");
            search_book();
            wait_for_enter();
            break;
        case 4:
            update_quantities();
            break;
        case 5:
            delet_book();
            break;
        case 6:
            system("cls");
            printf("we have %d Books.", book_count);
            wait_for_enter();
            break;
        default:
            exit(0);
            break;
        }

    } while (choice != 7);


    return 0;
}
