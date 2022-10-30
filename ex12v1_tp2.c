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

    if (m==12 && j>=22 || m==1 && j<=20 ){
        printf("Capricorne");
    }

    else{

        if (m==1 && j>=21 || m==2 && j<=19){
            printf("Verseau");
        }

        else{

            if (m==2 && j>=20 || m==3 && j<=20){
            printf("Poissons");
            }

            else {

                if(m==3 && j>=21 || m==4 && j<=20){
                    printf("Bélier");
                }

                else {

                    if(m==4 && j>=21 || m==5 && j<=20){
                        printf("Taureau");
                    }

                    else{

                        if(m==5 && j>=21 || m==6 && j<=21){
                            printf("Gémeaux");
                        }
                    
                        else{

                            if(m==6 && j>=22 || m==7 && j<=22){
                                printf("Cancer");
                            }

                            else{

                                if(m==7 && j>=23 || m==8 && j<=23){
                                    printf("Lion");
                                }

                                else{

                                    if(m==8 && j>=24 || m==9 && j<=23){
                                        printf("Vierge");
                                    }

                                    else{

                                        if(m==9 && j>=24 || m==10 && j<=23){
                                            printf("Balance");
                                        }

                                        else{

                                            if(m==10 && j>=24 || m==11 && j<=22){
                                                printf("Scorpion");
                                            }

                                            else{
                                                printf("Sagittaire");
                                            }
                                        }  
                                    } 
                                }
                            }
                        } 
                    }
                }
            }

        }
    }
    
return 0;
}