#include<stdio.h>
int main(){

    int i;

    printf("Ce programme permet  d'afficher le jour correspondant au rang du jour dans la semaine qui est compris entre 1 et 7.\n");

    do {

        printf("Donnez un nombre 1 <= n <= 7.\n");
        scanf("%d",&i);
        
    }while(i<1 || i>7);

    switch(i) {

        case 1: printf("Lundi");break;
        case 2: printf("Mardi");break;
        case 3: printf("Mercredi");break;
        case 4: printf("Jeudi");break;
        case 5: printf("Vendredi");break;
        case 6: printf("Samedi");break;
        case 7: printf("Dimanche");break;
        default: printf("ereur!");break;

    }

    return 0;
}