#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  Challenge 1 : Évaluation d'un Prêt

int main(){
    
    int Duree_du_pret, Score_de_credit;
    float Revenu_annuel;

    printf("Entrez votre Revenu annuel (Euro): ");
    scanf("%f", &Revenu_annuel);

    printf("Entrez votre Score_de_credit (sur 1000): ");
    scanf("%d", &Score_de_credit);

    printf("Entrez votre Duree_du_pret : ");
    scanf("%d", &Duree_du_pret);


    if ( Revenu_annuel >= 30000 && Score_de_credit >= 700 && Revenu_annuel <= 10 )
    {
        printf("Eligible");

    }else if ( Revenu_annuel >= 30000 && Score_de_credit >= 650 && Revenu_annuel <= 15 )
    {
        printf("Eligible avec conditions");


    }else if ( Revenu_annuel < 30000 && Score_de_credit < 650 && Revenu_annuel > 15 )
    {
        printf("Non Eligible");
        
    }
    
    


    return 0;
}