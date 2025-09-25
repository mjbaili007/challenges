#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    /*Challenge 4 : Equation du Deuxième Degré
Écrivez un programme C qui permet de calculer les solutions possibles d’une équation du deuxième degré*/

float  a , b , c, x ,x1 , x2 , delta;
printf(" denner l'equation\n ");
printf(" entrer la valuer de a  :");
scanf("%f",&a);
printf(" entrer la valuer de b :");
scanf("%f",&b);
printf(" entrer la valuer de c  :");
scanf("%f",&c);

delta=pow(b,2)-(4*a*c);
if (delta>0){
    x2=((-b)-sqrt(delta))/2*a;
    x1=((-b)+sqrt(delta))/2*a;
    printf("les solutions de l'equation est %f et %f " ,x1, x2);
}
else if ( delta = 0) {
x=(-b)/2*a;
printf("la solution est %f ",x);
}
else 
printf("l'equation n'admet  pas des solutions ");











return 0;
}