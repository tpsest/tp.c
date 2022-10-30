#include<stdio.h>
#include<math.h>
int main(){
    
    float rayon,air;
    const float PI=3.14;

    printf("Ce programme consiste a calculer l'air S d'un cercle.\n");

    do
    {
 
        printf("Donnez le rayon: \n");
        scanf("%f", &rayon);

    }while(rayon<0);
        
    air=PI*pow(rayon,2);

    printf("L'aire du cercle est: %.2f\n",air);


    return 0;
}