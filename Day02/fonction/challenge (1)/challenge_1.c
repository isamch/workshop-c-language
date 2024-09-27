#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Challenge 1 : Fonction de Somme :

int addition(int a, int b){

    return a+b;
}


int main(){
    
    int a, b, somme;

    printf("Enter Nuber 1 : ");
    scanf("%d", &a);
    printf("Enter Nuber 2 : ");
    scanf("%d", &b);
    
    somme = addition(a, b);
    printf("Somme = %d", somme);
    
    
    return 0;
}