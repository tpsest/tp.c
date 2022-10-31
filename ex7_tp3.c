#include<stdio.h>
int main(){

    printf("premier ou non??\n");
    
    int nombre,nb_diviseur=1;
    
    printf("nombre positif!!\n");
    scanf("%d", &nombre);

    for(int i=1;i<=(nombre/2);i++){

        if (nombre%i==0)
            nb_diviseur++;
            
    }

    if(nb_diviseur==2)
        printf("premier!");

    else
        printf("Non premier!");

    
    return 0;
}