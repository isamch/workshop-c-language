#include <stdio.h>
#include <math.h>
#define Pi 3.14159265

// Challenge 11 : Surface d'un rectangle

int main() {
    float Surface, Longeur, Largeur;
    
    
    printf("Entrez la Longeur : ");
    scanf("%f", &Longeur);

    printf("Entrez la Largeur : ");
    scanf("%f", &Largeur);
    
    Surface = Longeur * Largeur;


    printf("Surface : %.4f", Surface);

    return 0;
}
