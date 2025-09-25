#include <stdio.h>
#include<stdlib.h>

int main(){ 
    /*Écrivez un programme C pour planifier un voyage en fonction de :

Budget (en euros)
Destination (1 pour plage, 2 pour montagne, 3 pour ville)
Nombre de personnes*/
int budget , n;
printf("denner moi votre budget\n");
scanf("%d",&budget);
if (budget >= 1000){
    printf("votre Voyage haut de gamme\n");
}
else if(budget<=1000 && budget>=500){
    printf("votre voyage est moyen\n");
}
else {
    printf("votre voyage est eqonomie\n ");
}
printf("Destination (1 pour plage, 2 pour montagne, 3 pour ville\n)");
printf("quelle est le nobrs des perssonne\n ");
scanf("%d",&n);
if (budget >= 1000 && n >=2){
    printf("tu peux voyage dans les leiux suivant 1 2 3");
}
else if (budget >= 500 && n <+2){
    printf("tu peux voyage dans les leiux suivant  2 3");
}
else {
     printf("tu peux voyage dans les leiux suivant   3");
}
return 0;
}