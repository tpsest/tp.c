#include<stdio.h>
int main(){
    
    printf("Donnez au programme 10 entiers et il vous  indique le nombre des entiers positifs et le nombre des entiers négatifs données.\n");

    int nombre,nb_positive,nb_negative;

    for (int i = 0; i <10){

        printf("Nombre!!\n");
        scanf("%d",&nombre);

        if (nombre>=0)
            nb_positive++;

        else
            nb_negative++;

    }

    printf("Vous avez donner %d negatives et %d entiers positives",nb_negative,nb_positive);


    return 0;
}