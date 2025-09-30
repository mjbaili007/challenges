#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/*Écrivez un programme C qui définit une structure pour représenter un point dans un plan avec les champs x et y.
 Utilisez des pointeurs pour créer une variable de cette structure et modifiez ses valeurs. 
Affichez les valeurs du point.*/
 typedef struct{
    int x; 
    int y ; 
 }point;
int main (){

point p;
printf("ecriver la valeur de x   ");
scanf ("%d ",&p.x);
printf("ecriver la valeur de  y  ");
scanf ("%d",&p.y);

p.x= 3;
p.y= 6;

printf("les neveux valeurs de x et y est %d ,%d " , p.x ,p.y);




    return 0 ;
}
































