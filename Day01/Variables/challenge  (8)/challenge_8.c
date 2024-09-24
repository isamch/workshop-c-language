#include <stdio.h>
#include <math.h>

int main() {
    double nbr1, nbr2, nbr3;
    
    double Moyenne_geometrique;

    
    printf("Entrez le premier nombre: ");
    scanf("%lf", &nbr1);
    printf("Entrez le deuxieme nombre: ");
    scanf("%lf", &nbr2);
    printf("Entrez le troisieme nombre: ");
    scanf("%lf", &nbr3);

   
    // Moyenne_geometrique =  pow((nbr1 * nbr2 * nbr3),1.0/3.0);
    Moyenne_geometrique =  pow((nbr1 * nbr2 * nbr3),(double)1/(double)3);

 
    printf("La Moyenne geometrique est: %.4lf\n", Moyenne_geometrique);

    return 0;
}


