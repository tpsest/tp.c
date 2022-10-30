#include<stdio.h>
int main(){

    int i=0, n,som = 0 ;

    do
    {
        printf ("donnez un entier ") ;
        scanf ("%d", &n) ;

        som += n;
        i++;

    } while (i<4);
        
    /*
    while (i<4){

        printf ("donnez un entier ") ;
        scanf ("%d", &n) ;

        som += n;
        i++;
    }
    
    for (i=0 ; i<4 ; i++){ 
        
        printf ("donnez un entier ") ;
        scanf ("%d", &n) ;
        
        som += n ;

    }
    */
    
    printf ("Somme : %d\n", som) ;


    return 0;
}