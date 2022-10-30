#include<stdio.h>
int main(){

    float valeur1,valeur2;

    printf("Ce programme permettant de calculer la somme, la division, la soustraction et la multiplication de deux nombres.\n");
    
    printf("Donnez la premier valeur : \n");
    scanf("%f",&valeur1);

    printf("Donnez la deusieme valeur, il faut qu'il est different de 0 : \n");
    scanf("%f",&valeur2);

    if (valeur2==0){

        printf("Il faut que la deuxieme valeur est differente de 0 pour afficter la division.\n",valeur2);
        printf("%f+%f=%.2f\n%f-%f=%.2f\n%f*%f=%.2f",valeur1,valeur2,valeur1+valeur2,valeur1,valeur2,valeur1-valeur2,valeur1,valeur2,valeur1*valeur2);

    }
 
    else{

        printf("%f+%f=%.2f\n%f-%f=%.2f\n%f*%f=%.2f\n%f/%f=%.2f",valeur1,valeur2,valeur1+valeur2,valeur1,valeur2,valeur1-valeur2,valeur1,valeur2,valeur1*valeur2,valeur1,valeur2,valeur1/valeur2);

    }
    
    return 0;
}

