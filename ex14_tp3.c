#include<stdio.h>
int main(){

    int f=1,n;

    printf("Ce programme permet de calculer n!.\n");

    do
    {

    printf("Donnez n:\n");
    scanf("%d",&n);

    }while(n<0);

    if (n!=0){

        /*
        for (int i=1 ; i<=n ; i++){

            f=f*i;

        }
        */
        
        int i=1;
        while (i<=n){
            
            f=f*i;
            i++;

        }
        
    }
    
    printf("%d!=%d\n",n,f);

    return 0;
}