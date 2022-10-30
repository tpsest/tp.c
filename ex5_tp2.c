#include<stdio.h>
int main(){

    float hours,salaire_h,salaire_t;
    const float retenue=0.22;

    printf("Ce programme calcule le salaire mensuel net d'un individu connaissant son salaire horaire.\n");

    printf("Donnez le salaire horaire:\n");
    scanf("%f",&salaire_h);

    printf("Donnez le nombre d'heurs travallees:\n");
    scanf("%f",&hours);

    salaire_t=salaire_h*hours;

    if (salaire_t > 5000){

        salaire_t=salaire_t-(retenue*salaire_t);

    }

    printf("Le salaire totale est de %.2f DH",salaire_t);

    return 0;
}