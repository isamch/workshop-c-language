#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Challenge 2 : Recherche Binaire :

// Recherche Binaire :
int main() {

    int arr[20] = {2, 4, 5, 6, 8, 9};
    int i, target, low, high, mid;
    bool found = false;

    low = 0;
    high = 6 - 1;
    printf("-----------------\n");
    printf("Enter : ");
    scanf("%d", &target);

    while ( low <= high && found == false)
    {
        mid = (low + high) / 2;
        if ( arr[mid] == target )
        {
            found = true;
        }else if (arr[mid] > target)
        {
            high = mid - 1;
        }else{
            low = mid + 1;
        }
 
    
    }
    
    if (found == true)
    {
        printf("%d found in arr[%d] \n", target , mid );

    }else{
        printf("%d not found \n", target);
    }
    




    return 0;
}
