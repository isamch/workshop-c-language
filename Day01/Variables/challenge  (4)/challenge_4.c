#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    
    double kh, ms;
    

    printf("Entrez la vitesse en kilometres par heure (km/h) : ");
    scanf("%lf", &kh);

    ms = kh * 0.27778;
    
    printf("la transforme en metres par seconde : %.4lf (m/s)", ms);





    return 0;
}