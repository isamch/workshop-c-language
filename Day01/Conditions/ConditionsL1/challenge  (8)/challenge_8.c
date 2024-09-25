#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Challenge 8 : Mention Obtenue

int main(){
    
    float note_1, note_2, note_3, Moy;
    
    printf("Entrez votre note_1 : ");
    scanf("%f", &note_1);
    printf("Entrez votre note_2 : ");
    scanf("%f", &note_2);
    printf("Entrez votre note_3 : ");
    scanf("%f", &note_3);

    Moy = (note_1 + note_2 + note_3)/3;

    printf("moyenne : %.2f", Moy);
    if (Moy < 10)
    {
        printf("est recale");
    }else if (Moy >= 10 && Moy < 12)
    {
        printf("mention passable");
    }else if (Moy >= 12 && Moy < 14)
    {
        printf("mention passable");
    }else if (Moy >= 14 && Moy < 16)
    {
        printf("mention bien");   
    }else if (Moy >= 16)
    {
        printf("mention très bien");   
    }
    
    
    
    
    
    
    




    return 0;
}