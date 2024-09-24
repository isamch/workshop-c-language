#include <stdio.h>
#include <math.h>

// Challenge 12 : Nombre entier à quatre chiffres en ordre inverse

int main() {
    int nbr, rev_nbr;
    
    
    printf("Entrez votr Numbre : ");
    scanf("%d", &nbr);



    int n_1 = nbr % 10;

    int n_2 = (nbr / 10) % 10; 

    int n_3 = (nbr / 100) % 10;

    int n_4 = nbr / 1000;

    rev_nbr = n_1*1000 + n_2*100 + n_3*10 + n_4;


    printf("Surface : %d", rev_nbr);

    return 0;
}
