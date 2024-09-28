#include <stdio.h>
#include <string.h>
#define MAX 50

// Challenge 1 : Définition et Utilisation de Structure :

typedef struct 
{
    char nom[MAX];
    char prenom[MAX];
    int age;
    
}persone; 



int main(){

    persone per_1;
    
    strcpy(per_1.nom, "any");
    strcpy(per_1.prenom, "thing");
    per_1.age = 12;

    
    printf("nom : %s. \nprenom : %s. \nage : %d.", per_1.nom, per_1.prenom,per_1.age);
    
   
    
    

    return 0;
}
