#include<stdio.h>
int main(){

    int j,m;

    printf("A partir de la saisir do votre  date de naissance,ce programme affiche le signe du zodiaque correspondant.\n");

    do
    {
        printf("Donner le jour:\n");
        scanf("%d",&j);

        printf("Donnez le mois:\n");
        scanf("%d",&m);

    } while (j<0 || m<0 || m>12 || j>31 || m==2 && j>29 || m==4 && j>30 || m==6 && j>30  || m==9 && j>30 || m==10 && j>30 || m==11 && j>30 );

    switch(m) {

        case 1: if(j<=20){
                    printf("Capricorne");
                }

                else{
                    printf("Verseau");
                }
                break;

        case 2: if(j<=19){
                    printf("Verseau");
                }

                else{
                    printf("Poissons");
                }
                break;

        case 3: if(j<=20){
                    printf("Poissons");
                }

                else{
                    printf("Bélier");
                }
                break;

        case 4: if(j<=20){
                    printf("Bélier");
                }

                else{
                    printf("Taureau");
                }
                break;

        case 5: if(j<=20){
                    printf("Taureau");
                }

                else{
                    printf("Gemeaux");
                }
                break;

        case 6: if(j<=21){
                    printf("Gemeaux");
                }

                else{
                    printf("Cancer");
                }
                break;

        case 7: if(j<=22){
                    printf("Cancer");
                }

                else{
                    printf("Lion");
                }
                break;

        case 8: if(j<=23){
                    printf("Lion");
                }

                else{
                    printf("Vierge");
                }
                break;

        case 9: if(j<=23){
                    printf("Vierge");
                }

                else{
                    printf("Balance");
                }
                break;

        case 10: if(j<=23){
                    printf("Balance");
                }

                else{
                    printf("Scorpion");
                }
                break;

        case 11: if(j<=22){
                    printf("Scorpion");
                }

                else{
                    printf("Sagittaire");
                }
                break;

        case 12: if(j<=21){
                    printf("Sagittaire");
                }

                else{
                    printf("Capricorne");
                }
        default:printf("finally!!!");

    }

    return 0;
}