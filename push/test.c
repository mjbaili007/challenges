#include <stdio.h>
#include <stdlib.h>

int main (){
    /*Écrivez un programme en C qui va permettre d'afficher vos informations personnelles : 
    nom, prénom, âge, sexe, et adresse email. Les données sont saisies à partir du clavier.*/
char nom[20],f,e[30] ;
int age ;


     printf("salut !\n"); 
     printf("quelle est votre nom: ");
     scanf("%s",&nom);
     printf("quelle  est votre age ");
     scanf("%d",&age);
     printf("femme ou bein homme ?");
     scanf("%c",&f);
     printf("donne moi votre email");
     scanf("%S",&e);


    










    return 0;
}