#include<stdio.h>
int main (){
 
  int prime;
  float salaire_t,salaire_br;

  printf("Ce programme permet de calculer le salaire d'un ouvrier.\n");

  do
  {

    printf("Saisir le salaire brut:\n");
    scanf("%f",&salaire_br);

  } while (salaire_br<0);
  

  if (salaire_br<=1000){

    prime=200;

  }

  else {

    prime=500;

  }

  salaire_t=salaire_br+prime;

  printf("Le prime est %d donc votre salaire est de %.2f DH",prime,salaire_t);

  return 0;
}