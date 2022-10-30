#include<stdio.h>
int main(){

    int nombre;

    do
    {

        printf("Donnez un entier positif inferieur a 100\n");
        scanf("%d",&nombre);
        
    } while (nombre<100);

    printf("Merci pour le nombre %d",nombre);
    

    return 0;
}