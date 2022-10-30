#include<stdio.h>
#include<math.h>
int main (){
	
    float a,b,c,sol1,sol2,delta,val_delta;

    printf("Ce programme resout les equations du second degre (ax2 + bx + c = 0).\n");

    printf("Donnez a:\n");
    scanf("%f",&a);

    printf("Donnez b:\n");
    scanf("%f",&b);

    printf("Donnez c:\n");
    scanf("%f",&c);

    delta=(b*b)-4*a*c;

    if (a==0 ) {

        if (b==0 && c==0){

            printf("La solution de l'equation est l'ensemble R.");

        }

        else {

            if(b==0 && c!=0){

                printf("Cette équation ne possede pas de solutions.");

            }

            else{

                printf("La solution de l'equation est x=%.2f .",-c/b);

            }
        
        }   

    }


    else {

        if(delta>=0){

           if (delta>0) {

               sol1=(-b-sqrt(delta))/(2*a);
               sol2=(-b+sqrt(delta))/(2*a);

                printf("L'equation admet deux solutions x1=%.2f et x2=%.2f\n",sol1,sol2);

            }

            else {

                sol1=-(b)/(2*a);

                printf("L'equation admet un seul solution x=%.2f",sol1);
            }

        }

        else {

            val_delta=-delta;

                sol1=(-b)/(2*a);
                sol2=(sqrt(val_delta))/(2*a);

                printf("L'equation admet deux solutions dans C x1=%.2f+i%.2f et x2=%.2f-i%.2f",sol1,sol2,sol1,sol2); 

        }
    }

    return 0;
}