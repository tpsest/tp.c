#include<stdio.h>
int main(){

int nb;
float prix;

printf("Ce programme demande le nombre de photocopies effectuées et il affiche la facture correspondante.\n");

do
{
    printf("Donnez le nombre des copies:\n");
    scanf("%d", &nb);

} while (nb<0);

prix=(nb<=10)? nb*0.50 :((nb<=30)? 10*0.50+(nb-10)*0.30 : 10*0.5+20*0.3+(nb-30)*0.25);

printf("Le prix des photocopies est: %.2f DH",prix);

return 0;

}