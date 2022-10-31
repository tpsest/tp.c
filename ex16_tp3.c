#include<stdio.h>
int main(){

    int n;
    float somme=1;

    printf("Donnez n!\n");
    scanf("%d",&n);

    for(int i=2 ; i<=2*n ; i=i+2){

        somme=somme+(1/i);

    }

    printf("somme=%.2f",somme);

    return 0;
}