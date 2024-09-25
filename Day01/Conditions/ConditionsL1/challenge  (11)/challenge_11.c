#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// Challenge 11 : Jour de la Semaine

int main() {

    char *jour[] = {
        "lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", "dimanche"
    };

    int random_nbr;
    srand(time(NULL));
    
    random_nbr = (rand() % 7 + 1);

  
    printf("Jour : %s", jour[random_nbr-1]);



    return 0;
}
