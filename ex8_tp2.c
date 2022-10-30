#include<stdio.h>
int main(){

    int n;
    float prix;

    printf("Ce programme permet de calculer la facture d'une papeterie.\n");

    printf("Donnez le nombre des copies.\n");
    scanf("%d",&n);

    prix=(n<=10)? n*0.5 :((n<=30)? 10*0.5+(n-10)*0.30 : 10*0.5+20*0.30+(n-30)*0.25);

    printf("Le prix totale est de %.2f DH.\n",prix);

    return 0;
}