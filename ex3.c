#include<stdio.h>
#include <math.h>
int main(){
    float x1,x2,y1,y2,distance;

    printf("Ce programme permet de calculer la distance entre deux points d'un plan.\n");

    printf("Donnez les coordonees du premier point A(x1,y1):\n");

    printf("donnez x,puis y:\n");
    scanf("%f%f",&x1,&y1);

    printf("Donnez les coordonees du deuxieme point B(x2,y2):\n");

    printf("donnez x,puis y:\n");
    scanf("%f%f",&x2,&y2);
    
    distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    
    printf("La distance entre A(%f,%f) et B(%f,%f) est de AB=%.2f .",x1,y1,x2,y2,distance);
    
    return 0;
}