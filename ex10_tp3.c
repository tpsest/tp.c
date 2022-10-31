#include<stdio.h>
int main(){

    printf("Ce programme permet d'afficher les tables de multiplication des nombres 2 a 9.\n");

    for(int i=2; i<10 ;i++){

        for(int j=1  ;j < 10 ;j++){

            printf("%d*%d=%d\n",i,j,i*j);

        }

    printf("\n");

    }

    return 0;
}