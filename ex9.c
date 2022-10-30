#include<stdio.h>
int main(){

    int n,signe;

    printf("Ce programme permet de prendre la valeur d'un nombre entier est donner son signe:-1 si n est negatif, 0 si n est nul, 1 si n est positif.\n");

    printf("Donnez une valeur de n:\n");
    scanf("%d",&n);

    signe=(n==0)? 0:((n>0)? 1:-1);

    printf("n=%d donc signe=%d",n,signe);

    return 0;
}