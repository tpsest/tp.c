#include<stdio.h>
int main(){

    float a,b,c,max,min;

    printf("Ce programme calcule et affiche le max et le min de trois nombres.\n");

    printf("Donnez a,b,c:\n");
    scanf("%f%f%f",&a,&b,&c);

    max=(a>b && a>c)? a :((b>c)? b : c);
    min=(a<b && a<c)? a :((b<c)? b : c);
   

    printf("max(%f,%f,%f)=%f et min(%f,%f,%f)=%f ",a,b,c,max,a,b,c,min);

    return 0;
}