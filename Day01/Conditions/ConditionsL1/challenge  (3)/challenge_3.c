#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Challenge 3 : Somme de Deux Valeurs

int main(){
    
    int a, b;
    

    printf("Entrez  nbr 1 : ");
    scanf("%d", &a);
    printf("Entrez  nbr 2 : ");
    scanf("%d", &b);


    printf("%d + %d = %d\n", a, b, a+b);

    if (a == b)
    {
        printf("triple : %d", (a+b)*3);
    }
    







    return 0;
}