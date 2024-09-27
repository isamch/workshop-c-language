#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Challenge 4 : Fonction de Minimum :


void Minimum(int a, int b){
    if (a < b)
    {
        printf("min = %d.", a);

    }else if (a > b)
    {
        printf("min = %d.", b);

    }else{
        printf("Les deux nombres sont egaux.");
    }

}

int main(){
    
    int a, b;

    printf("Enter Nuber 1 : ");
    scanf("%d", &a);
    printf("Enter Nuber 2 : ");
    scanf("%d", &b);
    

    Minimum(a, b);
    

    

    
    return 0;
}