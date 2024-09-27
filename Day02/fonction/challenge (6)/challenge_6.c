#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Challenge 6 : Fonction de Fibonacci :

int Fibonacci( int nbr ){
    int i, f_0, f_1, f_3;

    f_0 = 0;
    f_1 = 1; 
    if (nbr == 0)
    {
        return f_0;
    }else if (nbr == 1)
    {
        return f_1;
    }else{
        for (i = 2; i <= nbr; i++)
        {
            f_3 = f_0 + f_1;
            f_0 = f_1;
            f_1 = f_3;
        }
        return f_3;
    } 
}


int main(){
    
    int nbr, f_n;

    printf("Entrez votre number : ");
    scanf("%d", &nbr);
    f_n = Fibonacci(nbr);
    printf("%d.", f_n);

    return 0;
}