#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char nom[50], prenom[50], sex[10], email[50]; 
    int age;

    printf("Entrez votre Nom : ");
    scanf("%s", nom);

    printf("Entrez votre Prenom : ");
    scanf("%s", prenom);

    printf("Entrez votre sex : ");
    scanf("%s", sex);

    printf("Entrez votre Age : ");
    scanf("%d", &age);

    printf("Entrez votre Email : ");
    scanf("%s", email);

    printf("Nom: %s\n", nom);
    printf("Prenom: %s\n", prenom);
    printf("Age: %s\n", sex);
    printf("Sex: %d\n", age);
    printf("Email: %s\n", email);


    return 0;
}