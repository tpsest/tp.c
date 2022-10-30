#include<stdio.h>
int main(){

    int h,m,s;

    printf("Ce programme permet d'afficher l'heure qui il est a la seconde suivante.\n");

    do
    {
    
    printf("Donner l'heure sous la forme h(24 heures), m(minutes), s(secondes).\n");
    scanf("%d%d%d",&h,&m,&s);

    }while (h>23 || h<00 || m>59 || m<0 || s>59 || s<0 );

    
    if (h==23 && m==59 && s==59){

        h=m=s=0;
        printf("%d:%d:%d",h,m,s);

    }

    else {

        if(m==59 && s==59){

            m=s=0;
            printf("%d:%d:%d",h+1,m,s);

        }

        else {

            if (s==59){

                s=0;
                printf("%d:%d:%d",h,m+1,s);

            }

            else{

                printf("%d:%d:%d",h,m,s+1);

            }
            
        }

    }

    return 0;
}