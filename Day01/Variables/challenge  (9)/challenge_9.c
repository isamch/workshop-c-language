#include <stdio.h>
#include <math.h>

// Challenge 9 : Calcul de la distance entre deux points dans un espace 3D :
int main() {
    int x1, x2, y1, y2, z1 ,z2;
    double Distance;
    
    
    printf("Entrez le premier Point : \n");
    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &z1);

    printf("Entrez le deuxieme Point : \n");
    scanf("%d", &x2);
    scanf("%d", &y2);
    scanf("%d", &z2);



    Distance = sqrt( pow((x2-x1), 2) + pow((y2-y1), 2) + pow((z2-z1), 2));

    printf("Distance : %.4lf", Distance);

    return 0;
}
