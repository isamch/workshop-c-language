#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    
    double t, k;
    

    printf("Entrez la temperature en Celsius : ");
    scanf("%lf", &t);

    k = t + 273.15;
    
    printf("la transforme en Kelvin : %.4lf \n", k);





    return 0;
}