#include<stdio.h>
int main(){

    int h,m,s,nombre_s,qution;

    printf("Donnez le nombre de secondes:\n");
    scanf("%d",&nombre_s);

    s=nombre_s%60;

    qution=(nombre_s)/(60);

    m=qution%60;

    qution=(qution)/(60);

    h=qution%60;

    printf("Donc le nombre de secondes %d est %dh:%dmin:%ds",nombre_s,h,m,s);


    return 0;
}