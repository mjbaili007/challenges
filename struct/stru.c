#include<stdio.h>
#include<stdlib.h>

int main (){

/*Écrivez un programme C qui définit une structure pour représenter une personne avec les champs nom, prenom, et age.
 Créez une variable de cette structure,
 assignez des valeurs aux champs, et affichez ces valeurs*/
typedef struct{
    char nom[30];
    char prenom[30];
    int age;
}perssonne;

perssonne pers = {"jbaili" , "mari" , 18};


printf(" le nom de cet perssonne est %s et sa prenom %s  et son age est %d", pers.nom,
      pers.prenom ,  pers.age);







    return 0 ; 
}