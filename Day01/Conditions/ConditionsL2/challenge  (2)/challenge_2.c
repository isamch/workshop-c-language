#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Challenge 2 : Calcul de Prime d'Assurance Auto

int main(){
    
    int age_conducteur, type_voiture, nbr_accident;
    double Prime_de_base = 1000; 
    double prime;


    printf("Entrez Age du conducteur (en annees) : ");
    scanf("%d", &age_conducteur);

    printf("Entrez Type de voiture \n (1 pour sportive, 2 pour utilitaire, 3 pour familiale) : ");
    scanf("%d", &type_voiture);

    printf("Entrez Nombre d'accidents  : ");
    scanf("%d", &nbr_accident);

    if ( age_conducteur < 25 )
    {
        prime = Prime_de_base * 1.5;
    }else if ( age_conducteur >= 25 && age_conducteur <=65 )
    {
        prime = Prime_de_base ;
        
    }else if ( age_conducteur > 65 )
    {
        prime = Prime_de_base * 1.2;
        
    }

    switch (type_voiture)
    {
    case 1 :
        prime = prime*2;
        // printf("Prime : %lf", prime);
        break;
    case 2 :
        prime = prime*1.2;
        // printf("Prime : %lf", prime);
        break;
    case 3 :
        prime = prime*1.1;
        // printf("Prime : %lf", prime);
        break;
    
    default:
        printf("Mauvais type de voiture!!!");
        break;
    }
    
    if ( nbr_accident > 1 )
    {
        prime = (30*prime)/100;
        printf("Prime = %lf", prime);
    }else{
        printf("Prime = %lf", prime);
    }
    
    

   
    





    return 0;
}