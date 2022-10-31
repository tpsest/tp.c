#include<stdio.h>
int main(){

    int n,somme=0;

    printf("Ce programme determine si ce nombre est parfait ou non.\n");

    printf("nombre!!\n");
    scanf("%d",&n);

    for (int i=1; i < n; i++){

        if(n%i==0)
            somme=somme+i;
        
    }

    if(somme==n)
        printf("parfait!");

    else
        printf("non");

    return 0;
}