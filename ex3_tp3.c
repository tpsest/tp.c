#include<stdio.h>
int main(){

    int i=0;
    float note,somme=0,moyenne;

    do
    {
        
        printf("Donnez la note:\n");
        scanf("%f",&note);

        if(note>=0 && note<+20){

            somme=somme+note;
            i++;

        }


    } while (note>=0);

    moyenne=(somme)/i;

    printf("Moyenne de ces %d notes : %.2f",i,moyenne);


    return 0;
}