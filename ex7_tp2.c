#include<stdio.h>
int main(){

    int n;

    printf("Ce programme indique si le nombre entree est pair ou impair ou nul.\n");

    printf("Donnez le nombre:\n");
    scanf("%d",&n);

    if(n==0){

        printf("Le nombre est nul.\n");

    }

    else {

        if(n%2==0){

            printf("Le nombre est pair.\n");
        }

        else {

            printf("Le nombre est impair.\n");
        }

    }

    return 0;
}