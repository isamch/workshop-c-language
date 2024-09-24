
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    
    double km, yard;
    

    printf("Entrez  la distance en kilometres  : ");
    scanf("%lf", &km);

    yard = km * 1093.61;
    
    printf("a transforme en yards : %.5lf \n", yard);





    return 0;
}