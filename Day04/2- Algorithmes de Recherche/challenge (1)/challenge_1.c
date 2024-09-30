#include <stdio.h>

// Challenge 1 : Recherche Linéaire :

int main() {

    int i, n, c=0;
    int t[6] = {1, 2, 4, 5, 4, 4};
    int f[6] = {0};
    
    printf("Enter : ");
    scanf("%d", &n);


    for ( i = 0; i < 6; i++){

        if (n == t[i]){
            c++;
            f[i] = 1;
            break;
        }
    
    }

    if ( c > 0 ){
        for ( i = 0; i < 6; i++){
            if ( f[i] == 1 )
            {
                printf("%d found in : %d \n", n, i);
            }

        }
        
    }else{
        printf("%d not found.\n", n);
    }
    

    return 0;
}
