#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Challenge 5 : Conversion d'Année

int main(){
    
    int year;


    printf("Entrez annee : ");
    scanf("%d", &year);

    printf("month : 12\n");
    
    if ( year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) )
    {
        printf(" Day : 366\n");
        printf(" Hour : %d\n", 366*24);
        printf(" Minute : %d\n", 366*24*60);
        printf(" Second : %d\n", 366*24*60*60);
    }else{
        printf(" Day : 365\n");
        printf(" Hour : %d\n", 365*24);
        printf(" Minute : %d\n", 365*24*60);
        printf(" Second : %d\n", 365*24*60*60);
    }
    

    
    
    
    
    
    




    return 0;
}