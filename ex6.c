#include<stdio.h>
int main (){
    int X,Y,ghost;

    printf("Ce programme permet d'echanger les valeurs de deux entiers X et Y.\n");

    printf("Donnez X:\n");
    scanf("%d",&X);

    printf("Donnez Y:\n");
    scanf("%d",&Y);
    
    printf("X=%d et Y=%d\n",X,Y);

    ghost=X;
    X=Y;
    Y=ghost;

    printf("Donc X=%d et Y=%d\n",X,Y);
    
    return 0;
}