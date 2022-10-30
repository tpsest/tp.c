#include<stdio.h>
int main(){

    int age;

    printf("Ce programme demande votre age ensuite il vous  informe si vous etes majeur ou mineur.\n");

    do 
    {

    printf("Donnez votre age:\n");
    scanf("%d",&age);

    }while(age<0);
        
    if (age>=18){

        printf("Vous etes majeur.");

    }

    else {

        printf("Vous etes mineur.");

    }


    return 0;
}

