#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Challenge 2 : Fonction de Multiplication :

int Multiplication(int a, int b){

    return a*b;
}


int main(){
    
    int a, b, produit;

    printf("Enter Nuber 1 : ");
    scanf("%d", &a);
    printf("Enter Nuber 2 : ");
    scanf("%d", &b);
    
    produit = Multiplication(a, b);
    printf("produit = %d", produit);
    
    
    return 0;
}