#ifndef FUNCTION_C
#define FUNCTION_C

// defind color :
// Define color constants
#define COLOR_RESET "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_BLUE "\033[34m"
#define COLOR_YELLOW "\033[33m"

// Define color default
#define COLOR_RESET "\033[0m"


// defind Max:
#define max_char 50
#define max_num 20
#define max_contact 200



// def struct :
typedef struct
{
    char nom[max_char];
    char numero[max_num];
    char email[max_char];

} contacts;

// global struct:
extern contacts contact[max_contact];

extern int count_contact;




// def function
void show_menu();
void ajouter_contact();
void Modifier_Contact();
void Supprimer_Contact();
void affichage_contact();
void search_contact();
void enter_continue();
void sorting_contact();




#endif