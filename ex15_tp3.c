#include<stdio.h>
int main(){

    int x,n,pow=1;

    printf("Ce programme permet de calculer pow(x,n) tel que x et n sont des enties.\n");

    do 
    {

    printf("Doonez x!:\n");
    scanf("%d",&x);

    printf("donnez n!:\n");
    scanf("%d",&n);

    }while(n<0);

    
    if(n!=0){

        /*
        for(int i=1 ;i<=n ;i++){

            pow=pow*x;

        }
        */

        int i=1;

        while(i<=n){

            pow=pow*x;
            i++;

        }
    
    }

    printf("pow(%d,%d)=%d",x,n,pow);

    return 0;
}