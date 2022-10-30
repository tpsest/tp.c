#include<stdio.h>
int main(){

int n, p ;

printf ("donnez une valeur pour n :");
scanf ("%d", &n) ;

printf ("merci pour %d\n", n) ;

printf ("donnez une valeur pour p : ") ;
scanf ("%d", &p) ;

printf ("merci pour %d", p);

/*chaque fois que j'utilise ce scanf et que je l'utilise avec une chaîne, il ne 
saisira que les caractères jusqu'au premier valeur donc lorsque l'utilisateur 
donne 12 90 comme valeur, le programme done la premiere  12 au variable a et
la deuxieme 90 a b car il est existe deja.*/

return 0;
}