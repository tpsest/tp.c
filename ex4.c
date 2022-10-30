#include<stdio.h>
int main (){
    
    float note1,note2,note3,note4,moyenne;
    const float C1=1,C2=1.5,C3=2,C4=1;

    printf("Ce programme permet a chaque eleve d'entrer ses notes et de calculer ainsi sa moyenne.\n");

    do
    {

        printf("Entrez les notes par cet ordre N1,N2,N3 puis N4:\n");
        scanf("%f%f%f%f",&note1,&note2,&note3,&note4);
       
    } while (note1>20 || note1<0 || note2>20 || note2<0 || note3>20 || note3<0 || note4>20 || note4<0 );
    
    moyenne=(note1*C1+note2*C2+note3*C3+note4*C4)/5.5;

    printf("La moyenne est: %.2f",moyenne);

    
    return 0;
}
