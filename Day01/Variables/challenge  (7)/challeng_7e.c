#include <stdio.h>

int main() {
    float nbr1, nbr2, nbr3;
    float poids_1 = 2.0, poids_2 = 3.0, poids_3 = 5.0;
    float moyenne_ponderee;

    
    printf("Entrez le premier nombre: ");
    scanf("%f", &nbr1);
    printf("Entrez le deuxieme nombre: ");
    scanf("%f", &nbr2);
    printf("Entrez le troisieme nombre: ");
    scanf("%f", &nbr3);

   
    moyenne_ponderee = (nbr1 * poids_1 + nbr2 * poids_2 + nbr3 * poids_3) / (poids_1 + poids_2 + poids_3);

 
    printf("La moyenne ponderee est: %.2f\n", moyenne_ponderee);

    return 0;
}
