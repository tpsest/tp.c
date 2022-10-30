#include<stdio.h>
int main(){

    float a,b,sol;

    printf("Ce programme permet la resolution d'une equation du premier degre (une Equation sous la forme ax+b=0).\n");

    printf("Donnez a:\n");
    scanf("%f",&a);

    printf("donnez b:\n");
    scanf("%f",&b);


    if(a==0){

        if(b==0){

            printf("La solution de l'equation est l'ensemble R. ");

        }

        else{

            printf("L'equation n'admit pas de solutions.");

        }

    }

    else {

        if(b==0){

            printf("La solution de l'equation est x=0.");

        }

        else{

            sol=(-b/a);

            printf("La solution de l'equation est x=%.2f .",sol);

        }

    }


    return 0;
}