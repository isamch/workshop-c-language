#ifndef FUNCTION_C
#define FUNCTION_C



// data :
extern char titre[MAX_BOOKS][50];
extern char autor[MAX_BOOKS][50];
extern float prix[MAX_BOOKS];
extern int quantities[MAX_BOOKS];
extern int book_count;



// call fun :
void show_menu();
void add_book();
void affichage_book();
void search_book();
void update_quantities();
void delet_book();
void wait_for_enter();



#endif

