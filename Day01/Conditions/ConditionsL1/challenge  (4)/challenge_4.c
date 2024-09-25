#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


// Challenge 4 : Equation du Deuxième Degré

int main(){
    
    double a, b, c, s, s_1, s_2, delta;
    
    // ax2+bx+c=0
    // delta = b2 - 4ac
    // delta <0 pas solutions
    // delta = 0 ; s = -b/2a
    // delta > 0 ; s1 = -b+sqrt(delta)/2a , s2 = -b-sqrt(delta)/2a

    printf("Entrez a : ");
    scanf("%lf", &a);
    printf("Entrez b : ");
    scanf("%lf", &b);
    printf("Entrez c : ");
    scanf("%lf", &c);
    
    delta = pow(b, 2) - 4 * a * c;

    if ( delta < 0)
    {
        printf("Pas d'une Solution.");
    }else if (delta == 0)
    {
        s = -b/(2*a);
        printf("Solution : %.2lf", s);
    }else if ( delta > 0 )
    {
        s_1 = (-b+sqrt(delta))/(2*a);
        s_2 = (-b-sqrt(delta))/(2*a);

        printf("sol 1 : %.2lf \n sol 2 : %.2lf.", s_1, s_2);
    }
    
    

    return 0;
}