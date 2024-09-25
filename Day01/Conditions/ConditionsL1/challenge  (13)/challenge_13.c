#include <stdio.h>
#include <math.h>


// Challenge 13 : Point sur un Segment

int main() {
    float x_1, y_1, x_2, y_2, x_p, y_p, m, m_p;
    
    
    printf("Entrez les coordonnees de Point A .\n");
    printf("X = ");
    scanf("%f", &x_1);
    printf("Y = ");
    scanf("%f", &y_1);

    printf("Entrez les coordonnees de Point B .\n");
    printf("X = ");
    scanf("%f", &x_2);
    printf("Y = ");
    scanf("%f", &y_2);

    printf("Entrez les coordonnees de Point P .\n");
    printf("X = ");
    scanf("%f", &x_p);
    printf("Y = ");
    scanf("%f", &y_p);


    printf("\n------------------------\n");

    
    m = (y_2-y_1)/(x_2-x_1);
    m_p = (y_p-y_1)/(x_p-x_1);

    if (m == m_p)
    {
        // max :
        float max_x , max_y, min_x, min_y;

        if ( x_1 > x_2 )
        {
            max_x = x_1;
            min_x = x_2;
        }else if ( x_1 < x_2 )
        {
            max_x = x_2;
            min_x = x_1;
        }
        
        if ( y_1 > y_2 )
        {
            max_y = y_1;
            min_y = y_2;
        }else if ( x_1 < y_2 )
        {
            max_y = y_2;
            min_y = y_1;
        }


        // compare :
        if ( (x_p >= min_x && x_p <= max_x) && (y_p >= min_y && y_p <= max_y))
        {

            printf("Le point \'P\' se situe entre les deux points \'A\' et \'B\'.");
        }else
        {
            printf("Le point \'P\' n'est pas entre les deux points \'A\' et \'B\'.");
        }
        
        



    }else{
        
        printf("Le point \'P\' n'est pas entre les deux points \'A\' et \'B\'.");
    }
    






    return 0;
}
