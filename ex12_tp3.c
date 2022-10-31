#include<stdio.h>
#include<math.h>
int main(){

    int somme=0,n;
    float a;

    printf("Ce programme permet de calculer S(a) = 1 + a + a²+…. +pow(a,k) de n termes.\n");

    printf("n!!");
    scanf("%d",&n);

    printf("a!!");
    scanf("%f",&a);

    for (int i=0;i<n;i++){

        somme=somme+pow(a,i);
        
    }

    printf("somme=%d",somme);


    return 0;
}