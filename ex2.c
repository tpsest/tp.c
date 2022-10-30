#include<stdio.h>
int main(){

    int nombre,doubl;

    printf("Ce programme permet de calculer le double d'un nombre entier.\n");

    printf("Donnez une valeur: \n");
    scanf("%d",&nombre);

    doubl=nombre*2;

    printf("Le double de %d est: %d",nombre,doubl);


    return 0;

}