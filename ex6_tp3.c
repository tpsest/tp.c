#include<stdio.h>
int main(){

    int i=1,n,somme=0;

    printf("C'est un programme qui calcule et affiche la somme des entiers positifs impairs compris entre 0 et un entier positif N entre");

    do 
    {

        printf("Donnez n:\n");
        scanf("%d",&n);

    }while(n<0 || n%2 !=0);
    
    while (i<n){

        if(i%2!=0){

            somme=somme+i;

        }

        i++;

    }

    printf("Somme=%d\n", somme);
    
    return 0;
}