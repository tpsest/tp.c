#include<stdio.h>
int main(){

    int quantite;
    float prix,prix_uni,prixt,remise;
    const float R=0.1;

    printf("Ce programme permet de calculer le prix d'une marchandise.\n");
    
    printf("Donnez le prix unitaire du produit:\n");
    scanf("%f",&prix_uni);

    printf("Saisir la quantite:\n");
    scanf("%d",&quantite);

    prix=prix_uni*quantite;
    remise=prix*R;

    if (prix>5000){

        prixt=prix-remise;

        printf("La remise est: %.2f DH et le prix final est: %.2f DH",remise,prixt);

    }

    else{

        prixt=prix;
        printf("Le prix final est: %.2f DH",prixt);

    }


    return 0;
    
}