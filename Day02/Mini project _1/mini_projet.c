#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define MAX_BOOKS  100

// data :
char titre[MAX_BOOKS][50];
char autor[MAX_BOOKS][50];
float prix[MAX_BOOKS];
int quantities[MAX_BOOKS];
int book_count = 0;



// show menu :
void show_menu(){
    printf("\n---------------------------\n");
    printf("1-Ajouter un livre au stock. \n");
    printf("2-Afficher tous les livres disponibles. \n");
    printf("3-Rechercher un livre par son titre. \n");
    printf("4-Mettre & jour la quantite d'un livre. \n");
    printf("5-Supprimer un livre du stock. \n");
    printf("6-Afficher le nombre total de livres en stock. \n");
    printf("7-Exit. \n");
    printf("\n---------------------------\n");
    
}

// add book :
void add_book(){
    int i, n;

    if ( book_count >= MAX_BOOKS)
    {
        printf("\n---------------------------\n");
        printf("Library is Full !!!!!.\n");
        return;
    }
    
    printf("\n---------------------------\n");
    printf("How meny Book you wanna add : ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        getchar();
        // add title :
        printf("Enter Title : ");
        scanf("%[^\n]", titre[book_count]);

        getchar();
        // add autor :
        printf("Enter Autor : ");
        scanf("%[^\n]", autor[book_count]);

        getchar();
        // add Price :
        printf("Enter Price : ");
        scanf("%f", &prix[book_count]);

        getchar();
        // add Price :
        printf("Enter Quantities : ");
        scanf("%d", &quantities[book_count]);

        printf("\n---------------------------\n");

        book_count++;
    }
    

    
}


// affichage :

void affichage_book(){

    int i = 0;
    if ( book_count == 0 )
    {
        system("cls");
        printf("No Book on library.\n");
        return;
    }
    
    for ( i = 0; i < book_count; i++)
    {
        printf("\n---------------------------\n");
        printf("Book %d ------------- \n", i+1);
        printf("Title : %s\n", titre[i]);
        printf("Autor : %s\n", autor[i]);
        printf("Price : %.2f\n", prix[i]);
        printf("Quantities : %d\n", quantities[i]);
    }
    
}


// search :
void search_book(){
    char search[50];
    bool found_book = false;
    int i;
    if ( book_count == 0 )
    {
        printf("Library empty.\n");
        return;
    }
    
    printf("\n----------------------\n");
    getchar();
    printf("searching About : ");
    scanf("%[^\n]", search);

    for ( i = 0; i < book_count; i++)
    {
        if ( strcmp(search, titre[i]) == 0)
        {
            found_book = true;
            break;
        }   
    }
    if ( found_book == false )
    {
        printf("Book not found\n");
    }else if ( found_book == true )
    {
        printf("\n----------------------\n");
        printf("The Book found in row : %d\n", i+1);
        printf("Title : %s\n", titre[i]);
        printf("Autor : %s\n", autor[i]);
        printf("Price : %.2f\n", prix[i]);
        printf("Quantities : %d\n", quantities[i]);
    }
}


// update quantities :

void update_quantities(){
    char search_uq[50];
    bool found_book = false;
    int i, new_q;

    printf("\n----------------------\n");
    getchar();
    printf("Enter Book Title for update the quantities : ");
    scanf("%[^\n]", search_uq);

    for ( i = 0; i < book_count; i++)
    {
        if ( strcmp(search_uq, titre[i]) == 0)
        {
            found_book = true;
            break;
        }   
    }
    if ( found_book == false )
    {
        printf("Book not found\n");
    }else if ( found_book == true )
    {
        printf("\n----------------------\n");
        printf("The Book is : \n");
        printf("Title : %s\n", titre[i]);
        printf("the Quantities is : %d\n", quantities[i]);

        printf("\n----------------------\n");
        getchar();
        printf("Enter the new quantities : ");
        scanf("%d", &new_q);

        quantities[i] = new_q;

        printf("the new quantities of the book %s : %d", titre[i],quantities[i]);

    }
}

// Supprimer un Livre du Stock :

void delet_book(){

    char search_del[50];
    bool found_book = false;
    int i;

    printf("\n----------------------\n");
    getchar();
    printf("Enter Book Title to Delet : ");
    scanf("%[^\n]", search_del);

    for ( i = 0; i < book_count; i++)
    {
        if ( strcmp(search_del, titre[i]) == 0)
        {
            found_book = true;

            break;
        }   
    }
    if ( found_book == false )
    {
        printf("Book not found\n");
    }else if ( found_book == true )
    {
        printf("\n----------------------\n");
        printf("The Book is : \n");
        printf("Title : %s\n", titre[i]);
        printf("Autor : %s\n", autor[i]);
        printf("Price : %.2f\n", prix[i]);
        printf("Quantities : %d\n", quantities[i]);


        for ( i = i  ; i < book_count; i++)
        {
            strcpy(titre[i], titre[i+1]);
            strcpy(autor[i], autor[i+1]);
            prix[i] = prix[i+1];
            quantities[i] = quantities[i+1];
        }

        book_count--;
        
    }

}






//  wait to click enter ;
void wait_for_enter() {
    printf("\nPress Enter to show the menu...");
    getchar();  
    getchar();  
}

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
