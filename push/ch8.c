#include<stdio.h>
#include<stdlib.h>
int main(){
/* Challenge 5 : Conversion d'Année
Écrivez un programme C piloté par menu pour convertir une année donnée en :

Mois
Jours
Heures
Minutes
Secondes
Pour plus de simplicité, n'incluez pas l'année bissextile (sauf si vous êtes courageux pour le faire). 1 an = 365 jours, 1 mois = 30 jours.*/

    int  chois,s ;
   
    printf("entrer une valeur puisque:\n 1=moins\n  2=jours\n  3=heurs\n  4=minutes\n 5=secondes\n ");
    scanf("%d",&chois);
    switch(chois){
    case 1:
    s = 12;
        printf(" l'annee en mois est %d " ,s);
        break;
    case 2:
    s= 365;
        printf(" l'annee en Jours est %d " ,s);
        break;
    case 3:
    s= 365*24;
        printf(" l'annee en heurs  est %d " ,s);
        break;
    case 4:
    s = 365*24*60;
        printf(" l'annee en minutes est %d " ,s);
        break;
     case 5:
    s =365*24*60*60 ;
        printf(" l'annee en secondes est %d " ,s);
        break;
    default:
        printf("!!!!");
        break;

    }



    
 












    return 0 ;
}