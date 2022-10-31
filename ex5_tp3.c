#include<stdio.h>
int main(){

    int n,i=1,multi=0;

    printf("Ce pregramme permet d'afficher les multiples de 5 se trouvant entre 5 et un nombre N superieur ouegal & 5\n");

    printf("Donnez le nombre n:\n");
    scanf("%d",&n);

    while (multi<n){

        multi=5*i;
        
        if(multi<n)
            printf("%d \n",multi);

        i++;
        
    }
    

    return 0;
}