#include<stdio.h>
int main(){

    int n;

    printf("Ce programme affiche la liste des diviseurs d'un entier positif N.\n");

    printf("nombre!!");
    scanf("%d",&n);

    for (int i=1; i<=n; i++){
        
        if(n%i==0)
            printf("%d\n",i);
        
    }

    return 0;
}