#include<stdio.h>
int main(){

    int nb1,nb2,vl1,vl2,rest,pgcd,ppcm;

    printf("Ce programme retournant le PGCD ainsi que le PPCM de 2 entiers entres.\n");

    do
    {
        printf("Doonez le premier nombre:\n");
        scanf("%d",&nb1);

        printf("Doonez le deuxieme nombre:\n");
        scanf("%d",&nb2);

    } while (nb1<0 || nb2<0);
    
    vl1=nb1;
    vl2=nb2;

    while (vl2!= 0){

        rest=vl1%vl2;
        vl1=vl2;
        vl2=rest;

    }

    pgcd=vl1;
    ppcm=(nb1*nb2)/(pgcd);

    printf("PGCD(%d,%d)=%d et PPCM(%d,%d)=%d\n",nb1,nb2,pgcd,nb1,nb2,ppcm);

    return 0;
}