#include <stdio.h>
#define max 100


// Challenge 1 : Tri à Bulles

int main() {
    int i, j, n;
    int t[max];
    int temp;

    // number d'elements :
    printf("Entrez le nombre d'elements de tableau : ");
    scanf("%d", &n);

    // remplissage :
    for ( i = 0; i < n; i++)
    {
        printf("Enter arr[%d] : ", i+1);
        scanf("%d", &t[i]);
    }

    // traitement :
    for ( i = 0; i < n; i++){
        
        for ( j = 0; j < n-1; j++){
            if ( t[j] > t[j+1] ){
                temp = t[j];
                t[j] = t[j+1];
                t[j+1] = temp;

            }
            
        }
        

    }
    
    for ( i = 0; i < n; i++){
        printf(" %d", t[i]);

        if ( i < n-1 )
        {
            printf(",");
        }else{
            printf(".\n");
        }
    }
    




    return 0;
}
