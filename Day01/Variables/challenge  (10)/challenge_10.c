#include <stdio.h>
#include <math.h>
#define Pi 3.14159265

// Challenge 10 : Volume d'une sphère :

int main() {
    double r;
    double Volume;
    
    
    printf("Entrez le Rayon : ");
    scanf("%lf", &r);
    
    Volume = (4.0/3.0) * Pi * pow(r , 3.0);


    printf("Volume : %.4lf", Volume);

    return 0;
}
