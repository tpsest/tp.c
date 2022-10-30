#include<stdio.h>
int main () {
    
    int valeur,rest;

    printf("Ce programme permet a  tester et afficher si le nombre est divisible par 3.\n");

    printf("Donnez une valeur:\n");
    scanf("%d", &valeur);

    rest=valeur%3;
    
    if(rest==0){
        
        printf("%d est devisible par 3",valeur);

    }

    else{
        
        printf("%d n'est pas devisible par 3",valeur);
        
    }
    
    return 0;
}