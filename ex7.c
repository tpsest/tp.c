#include<stdio.h>
int main(){
    float valeur,val_abs;

    printf("Ce programme consiste a afficher la valeur absolue d'un nombre reel.\n");

    printf("Donnez une valeur:\n");
    scanf("%f",&valeur);

    val_abs =valeur;

    if (val_abs < 0){
        val_abs = -val_abs;
    }

    printf("La valeur absolue de %f est :%f",valeur,val_abs);

    return 0;
}