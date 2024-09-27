#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Challenge 3 : Fonction de Maximum :


void Maximum(int a, int b){
    if (a > b)
    {
        printf("max = %d.", a);

    }else if (a < b)
    {
        printf("max = %d.", b);

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
    

    Maximum(a, b);
    

    

    
    return 0;
}