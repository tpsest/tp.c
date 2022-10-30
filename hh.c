#include<stdio.h>
int main(){

    int year;

    printf("Ce programme verifie si une annee est bissextile ou non.\n");

    printf("Donnez l'anee que vous avez!\n");
    scanf("%d", &year);

    if(year%4==0){

        if(year%400==0){

            printf("Cette anee est bissextile.\n");
        }

        else {

            printf("Cette anee n'est pas bissextile.\n");

        }

    }


    else {

        printf("Cette anee n'est pas bissextile.\n");

    }


    return 0;
}