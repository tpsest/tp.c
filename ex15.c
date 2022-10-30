#include<stdio.h>
int main (){

    char touche;

    printf("Appuis sur la touche!\n");
    scanf("%c",&touche);

    if(touche>=97 && touche<=122 ||touche>=65 && touche<=90) {

        printf("%c",touche);

    }

    else {

        printf("erreur!");
        
    }

    return 0;
}