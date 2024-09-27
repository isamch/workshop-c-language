#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//  Challenge 10 : Générateur de Mot de Passe :


int main() {
   
    int i = 0, nbr, rand_lower_uper_int, random_lower, random_uper, random_int;

    srand((unsigned int)time(NULL));
    


    printf("Entrez votre number : ");
    scanf("%d", &nbr);



    // random syntax : 
    //  rand()% (max - min - 1) + min;
   
    while (i < nbr)
    {
        rand_lower_uper_int = (rand() % 3 +  1);
        random_lower = (rand() % (90 - 65 - 1) + 65);
        random_uper = (rand() % (122 - 97 - 1) + 97);
        random_int = (rand() % 9 +  0);


        if (rand_lower_uper_int == 1)
        {
            printf("%c", (char)random_uper);
            
        }else if (rand_lower_uper_int == 2)
        {
            printf("%c", (char)random_lower);

        }else if (rand_lower_uper_int == 3)
        {
            printf("%d", (int)random_int);
        }

        i++;
    }
    


    return 0;
}

